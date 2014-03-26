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
#define ll unsigned long long
#define number32 4294967296ull

///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;

int main()
{
	int W,w;
	int k[1001],v[1001];
	int n;
	int c[1001][1001];
	int i,j;
	cin>>n;
	FORI(i,1,n+1)
	{
		cin>>k[i]>>v[i];
	}
	cin>>W;
	
	//actual knapsack begins here
	for(w=0;w<=W;w++)
	{
		c[0][w]=0;
	}
	for(i=1;i<=n;i++)
	{
		c[i][0]=0;
		for(w=1;w<=W;w++)
		{
			if(k[i]<=w)
			{
				c[i][w]=max((v[i]+c[i-1][w-k[i]]),c[i-1][w]);
			}
			else c[i][w]=c[i-1][w];
		}
	}
	for(i=1;i<=n;i++)
	{
		for(w=0;w<=W;w++)
		{
			cout<<c[i][w]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
	 
