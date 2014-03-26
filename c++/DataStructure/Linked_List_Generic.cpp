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
	listNode<T> *next;
};

//typedef struct listNode<int> ListNode;
//typedef ListNode *ListNodePtr;


template <typename T>
void InsertNode(listNode<T>* sptr,T value)
{
	if(sptr==NULL)
	{
		sptr=(listNode<T>)malloc(sizeof(listNode<T>));
		if(sptr!=NULL)
		{
			sptr->data=value;
			sptr->next=NULL;
		}
		else cout<<"No Memroy available"<<endl;
	}
	else
	{
		InsertNode(&sptr->next,value);
	}
}


		

int main()
{
	int i,j,n;
	struct listNode<int> *headPtr=NULL;
	cin>>n;
	FOR(i,n)
	{
		cin>>j;
		InsertNode(headPtr,j);
	}
	
   
	return 0;
}
	

