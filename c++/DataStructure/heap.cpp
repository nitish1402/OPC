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
#define FORI(i,a,n) for(i=a;i<=n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll unsigned long long
#define number32 4294967296ull
#define MAX 100001
#define left(i) (i<<1)
#define right(i) ((i<<1)+1)
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;
int heap_length,largest;   // a variable to store the current lebgth of heap

void Max_heapify(int  A[],int i)
{
	int l,r;
	l=left(i);
	r=right(i);
	if(l<=heap_length && A[l]>A[i])
	{
		largest=l;
	}
	else largest=i;
	
	if(r<=heap_length && A[r]>A[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		swap(A[i],A[largest]);
		Max_heapify(A,largest);
	}
}

void build_max_heap(int A[],int n)
{
	heap_length=n;
	for(int i=(heap_length)/2;i>=1;i--)
	{
		Max_heapify(A,i);
	}
}


void heapsort(int A[],int n)
{
	build_max_heap(A,n);
		
		int i;
		FOR(i,n)
		{
			cout<<A[i]<<" ";
		}
		cout<<endl;
		// heap sorting 
		
		for(i=n;i>1;i--)
		{
			swap(A[1],A[i]);
			heap_length-=1;
			Max_heapify(A,1);
		}
		
		FORI(i,0,n)
		{
			cout<<A[i]<<" ";
		}
		cout<<endl;
}
int main()
{
	int n;
	int i,j;
	int A[10000];
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
	    FORI(i,1,n)
	    {
			cin>>A[i];
		}
		
	}
	heapsort(A,n);
	return 0;
}
