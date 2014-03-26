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

int A[11]={0,3,6,7,2,1,4,8,9,5,10};

int Merge(int A[],int s,int b,int e)
{
	int n1=b-s+1;
	int n2=e-b;
	int l1[n1+1];
	int l2[n2+1];
	
	int i,j;
	for(i=1;i<=n1;i++)
	{
		l1[i]=A[s+i-1];
	}
	for(j=1;j<=n2;j++)
	{
		l2[j]=A[b+j];
	}
	
	l1[n1+1]=99999999;
	l2[n2+1]=99999999;
	
	i=j=1;
	int k;
	
	bool counted=false;
	int inv=0;
	for(k=s;k<=e;k++)
	{
		if(counted==false && l2[j]<l1[i])
		{
			inv+=(n1-i+1);
			counted=true;
		}
		
		if(l1[i]<=l2[j])
		{
			A[k]=l1[i];
			i++;
		}
		else
		{
			A[k]=l2[j];
			j++;
			counted=false;
		}
	}
	return inv;
}
	

int Merge_Sort(int a[],int s,int e)
{
	int inver=0;
	if(s<e)
	{
		int b=(s+e)/2;
		inver+=Merge_Sort(a,s,b);
		inver+=Merge_Sort(a,b+1,e);
		inver+=Merge(a,s,b,e);
	}
	return inver;
}


int main()
{
	
	int ans=Merge_Sort(A,1,10);
	int i;
	FOR(i,11)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;
    cout<<ans<<endl;		
	return 0;
}
