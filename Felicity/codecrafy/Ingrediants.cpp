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
#define MAX 100001
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;

int main()
{
	int i,j,k;
	int n,m;
	int a,b,c;
	int s;
    int d[101][101];
    int S[9];
    FOR(i,101)
    {
		FOR(j,101)
		{
			d[i][j]=100000;
		}
		d[i][i]=0;
	}	
	cin>>n>>m;
	FOR(i,m)
	{
		cin>>a>>b>>c;
		d[a][b]=c;
		d[b][a]=c;
	}
	FOR(k,n)
	{
		FOR(i,n)
		{
			FOR(j,n)
			{
				d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
			}
		}
	}
	cin>>s;
	FOR(i,s)
	{
		cin>>S[i];
	}
	cin>>a>>b;
	int m1=100000000,m2=100000000;
	int ans=0;
	FOR(i,s)
	{
			m1=d[a][S[i]];
			m2=d[b][S[i]];
		cout<<m1<<" "<<m2<<endl; 
		ans+=min(m1,m2);
	}
	
	cout<<ans<<endl;
	return 0;
}
