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


int A[11]={11,3,6,7,2,1,4,8,9,5,10};

int partition(int a[],int p,int r)
{
	int x=a[r];
	int i=p-1;
	for(int j=p;j<r;j++)
	{
		if(a[j]<=x)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[r]);
	return i+1;
}

void quick_sort(int A[],int p,int r)
{
	if(p<r)
	{
		int q=partition(A,p,r);
		quick_sort(A,p,q-1);
		quick_sort(A,q+1,r);
	}
}

int main()
{
	quick_sort(A,0,10);
	int i;
	FOR(i,11)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
		
	return 0;
}
	
