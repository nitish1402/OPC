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

int A[1001]={0};

void gen()
{
	A[0]=0;
	int i;
	for(i=1;i<=1001;i++)
	{
		if(i%2==0)
		{
			A[i]=A[i/2]+A[i/2-1]+i/2;
		}
		else
		{
			A[i]=2*A[(i-1)/2]+(i-1)/2+1;
		}
	}
}

int main()
{
	gen();
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout<<A[n]<<endl;
	}
	return 0;
}
