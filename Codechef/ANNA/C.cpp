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
#define ll long double
#define number32 4294967296ull
#define MAX 100001
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;


int main()
{
	int t;
    ll n;
	cin>>t;
	while(t--)
	{
		ll a,b,c;
		cin>>n;
		a=1ll;
		b=4ll;
		c=n+5ll;
		ll num=pow(b,2)+(4*c);
		//cout<<num<<endl;
		ll det=sqrt(num);
		//cout<<det<<endl;
		ll n1=0,n2=0;
		n1=(det-b)/2;
		//n2=(-det-b)/2;
		if((long long)n1==1)  cout<<"-1"<<endl;  
		else cout<<(long long)n1<<endl;
	}
	return 0;
}
		
		
