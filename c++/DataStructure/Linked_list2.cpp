#include <cstdlib>
#include <stdio.h>
#include <cstring>
#include <complex>
#include <vector>
#include <cmath>
#include <ctime>
#include <iostream>
#include <numeric>
#include <algorithm>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#include <utility>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll  long long
#define number32 4294967296ull
#define MAX 100001
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

template <typename T> 
struct listNode
{
	T data;
	struct listNode *next;
};

typedef struct listNode<int> ListNode;
typedef ListNode *ListNodePtr;



using namespace std;

void InsertNode(ListNodePtr *sptr,int value)
{
	if(*sptr==NULL)
	{
		*sptr=(ListNodePtr)malloc(sizeof(ListNodePtr));
		if(*sptr!=NULL)
		{
			(*sptr)->data=value;
			(*sptr)->next=NULL;
		}
		else cout<<"No Memroy available"<<endl;
	}
	else
	{
		InsertNode(&(*sptr)->next,value);
	}
}

void InsertNodeItr(ListNodePtr *sptr,int value)
{
	ListNodePtr current,temp;
	if(*sptr==NULL)
	{
		*sptr=(ListNodePtr)malloc(sizeof(ListNodePtr));
		if(*sptr!=NULL)
		{
			(*sptr)->data=value;
			(*sptr)->next=NULL;
		}
		else cout<<"No Memroy available"<<endl;
	}
	else
	{
		current=(ListNodePtr)malloc(sizeof(ListNodePtr));
		current->data=value;
		current->next=(*sptr);
		(*sptr)=current;
	}
}

void InsertNodeAfter(ListNodePtr *sptr,int value)
{
	ListNodePtr p,q;
	p=(ListNodePtr)malloc(sizeof(ListNodePtr));;
	p->data=value;
	p->next=NULL;
	
	if(*sptr==NULL)
	{
		*sptr=p;
	}
	else
	{
		//serach for current position
		for(q=*sptr;q->next!=NULL;q=q->next);	
		q->next=p;
	}
}


//following function merge the two sorted linked list
ListNodePtr Merge(ListNodePtr head1,ListNodePtr head2)
{
	if(head1==NULL)
	{
		return head2;
	}
	else if(head2==NULL)
	{
		return head1;
	}
	
	ListNodePtr Mergehead=NULL;
	
	if(head1->data<head2->data)
	{
		Mergehead=head1;
		Mergehead->next=Merge(head1->next,head2);
	}
	
	else if(head1->data>=head2->data)
	{
		Mergehead=head2;
		Mergehead->next=Merge(head1,head2->next);
	}
	
	return Mergehead;
}
	
//function for peinting element from tail to head
void printListInv(ListNodePtr sptr)
{
	stack<int> s;//we will push the values in stack until the size of linked list
	
	while(sptr!=NULL)
	{
		s.push(sptr->data);
		sptr=sptr->next;
	}

	while(!s.empty()) //popping element
	{
		cout<<s.top()<<endl;
		s.pop();
	}
}


void sort(ListNodePtr sptr)
{
	ListNodePtr temp,temp1;
	
	temp=sptr;
	
	while(temp!=NULL)
	{
		temp1=temp;
		while(temp1!=NULL)
		{
			if(temp1->data < temp->data)
			{
				swap(temp1->data,temp->data);
			}
			temp1=temp1->next;
		}
		temp=temp->next;
	}
}
void printList(ListNodePtr sptr)
{
	while(sptr!=NULL)
	{
		cout<<sptr->data<<" ";
		sptr=sptr->next;
	}
}
		

int main()
{
	int i,j,n;
	ListNodePtr headPtr=NULL;
	ListNodePtr headPtr1=NULL;
	ListNodePtr MergePtr=NULL;
	cin>>n;
	FOR(i,n)
	{
		cin>>j;
		InsertNode(&headPtr,j);
	}
	printList(headPtr);
	cout<<endl;
	cin>>n;
	FOR(i,n)
	{
		cin>>j;
		InsertNode(&headPtr1,j);
	}
	printList(headPtr);
	cout<<endl;
	//printListInv(headPtr);
    sort(headPtr);
    sort(headPtr1);
	MergePtr=Merge(headPtr,headPtr1);
	printList(MergePtr);
	cout<<endl;
	return 0;
}
	

