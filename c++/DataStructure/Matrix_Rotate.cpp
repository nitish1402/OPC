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

void Rotate()
{
	return ;
}

int main()
{
	int n;
	int i,j;
	int A[11][11];
	cin>>n;
	FOR(i,n)
	{
		FOR(j,n)
		{
			cin>>A[i][j];
		}
	}
	FOR(i,n)
	{
		FOR(j,n)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//rotating at angle 90
	int first,last;
	int offset;
	int layer;
	for(layer=0;layer<n/2;++layer)
	{
		first=layer;
		last=n-1-layer;
		for(i=first;i<last;i++)
		{
			offset=i-first;
			int top=A[first][i];
			
			//top->left
			A[first][i]=A[last-offset][first];
			
			//left->right
			
			A[last-offset][first]=A[last][last-offset];
			
			A[last][last-offset]=A[i][last];
			
			A[i][last]=top;
		}
	}
	FOR(i,n)
	{
		FOR(j,n)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	for(layer=0;layer<n/2;++layer)
	{
		first=layer;
		last=n-1-layer;
		for(i=first;i<last;i++)
		{
			offset=i-first;
			int top=A[first][i];
			
			//top->left
			A[first][i]=A[last-offset][first];
			
			//left->right
			
			A[last-offset][first]=A[last][last-offset];
			
			A[last][last-offset]=A[i][last];
			
			A[i][last]=top;
		}
	}
	FOR(i,n)
	{
		FOR(j,n)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
}
