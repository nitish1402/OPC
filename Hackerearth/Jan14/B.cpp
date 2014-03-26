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
	int t;
	cin>>t;
	long double a,b,c;
	long double s,ar;
	map<pair<pair<ll,ll>,ll>,ll> k;
	while(t--)
	{
		cin>>a>>b>>c;
		ll A[3]={a,b,c};
		sort(A,A+3);
		 pair<ll,ll> L=make_pair(A[0],A[1]);
		 pair<pair<ll,ll>,ll> S=make_pair(L,A[2]);
		
		k[S]++;
	//	cout<<ar<<endl;
		
	}
	map<pair<pair<ll,ll>,ll>,ll >::iterator it;
	int count=0;
	for(it=k.begin();it!=k.end();it++)
	{
//		cout<<it->second<<endl;
		if(it->second==1)
		count++;
	}
	cout<<count<<endl;
		
	return 0;
}
