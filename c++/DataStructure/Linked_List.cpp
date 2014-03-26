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

using namespace std;

template <typename T>
struct listNode
{
	T data;
	struct listNode *next;
};

typedef struct listNode<int> ListNode;
typedef ListNode *ListNodePtr;



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

void renoveDuplicates(ListNodePtr sptr)
{
	map<int,bool> M;
	ListNodePtr previous=NULL;
	while(sptr!=NULL)
	{
		if(M[sptr->data]==true)
		{
			cout<<"i m here"<<endl;
			previous->next=sptr->next;
		}
		else
		{
			M[sptr->data]=true;
			previous=sptr;
		}
		sptr=sptr->next;
	}
}

ListNodePtr nthToLast(ListNodePtr sptr,int n)
{
	if(sptr==NULL || n<1)
	{
		return NULL;
	}
	else
	{
		ListNodePtr p1=sptr;
		ListNodePtr p2=sptr;
		
		for(int j=0;j<n-1;j++)
		{
			if(p2==NULL)
			{
				return NULL;
			}
			p2=p2->next;
		}
		while(p2->next!=NULL)
		{
			p2=p2->next;
			p1=p1->next;
		}
		return p1;
	}
}

void InsertNodeSorted(ListNodePtr *sptr,int value)
{
	ListNodePtr prev,curr,newPtr;
	newPtr=(ListNodePtr)malloc(sizeof(ListNodePtr));
	if(newPtr!=NULL)
	{
		newPtr->data=value;
		newPtr->next=NULL;
		
		prev=NULL;
		curr=*sptr;
		
		//finding the appropriate position
		while(curr!=NULL&& value>curr->data)
		{
			prev=curr;
			curr=curr->next;
		}
		
		if(prev==NULL)
		{
			newPtr->next=*sptr;  //when sptr is null in beginning
			*sptr=newPtr;
		}
		
		else  //here prev hold the previous postion
		{
			prev->next=newPtr;
			newPtr->next=curr;
		}
	}
	else
	   cout<<"Memory Not available"<<endl;
}

void deleteNode(ListNodePtr *sptr,int value)
{
	ListNodePtr q,tmp;
	if(*sptr==NULL)
	{
		return ;
	}
	else
	{
		q=*sptr;
		while(q->data!=value)
		{
			q=q->next; //current
		}
		//found node with value
		//tmp=(ListNodePtr)malloc(sizeof(ListNodePtr));
		tmp=q->next;
		q->data=tmp->data;
		q->next=tmp->next;
	}
}
		

	
void printList(ListNodePtr sptr)
{
	while(sptr!=NULL)
	{
		cout<<sptr->data<<endl;
		sptr=sptr->next;
	}
}
		

int main()
{
	int i,j,n;
	ListNodePtr headPtr=NULL;
	cin>>n;
	FOR(i,n)
	{
		cin>>j;
		InsertNodeSorted(&headPtr,j);
	}
	printList(headPtr);
	//cin>>n;
	//ListNodePtr nth=nthToLast(headPtr,n);
	//cout<<nth->data<<endl;
	deleteNode(&headPtr,3);
	printList(headPtr);
	return 0;
}
	

