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

int main()
{
	int A[100][100];
	int k[5]={0,1,2,5,10};
	int n;
	cin>>n;
	int i,j;
	FOR(i,n+1)
	{
		A[0][i]=101;
	}
	A[0][0]=0;
	FORI(i,1,5)
	{
		FOR(j,n+1)
		{
			A[i][j]=A[i-1][j];
			if(k[i]<=j)
			{
				A[i][j]=min(A[i][j],1+A[i][j-k[i]]);
			}
		}
	}
	FOR(i,5)
	{
		FOR(j,n+1)
		{
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
