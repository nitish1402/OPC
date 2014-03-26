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
#define mod 1000000007
#define ll unsigned long long
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

template <typename T>

T expo(T a,T b)
{
	T result = 1;
	
    while (b){
      if (b&1){
        result =(result* a);
      }
      b >>=1 ;
      a =(a* a);
  }

  return result;
}
inline ll  MOD(ll a)
{
   if(a>mod) return a%mod;
   else if(a==mod) return 0ll;
   return a;
}

using namespace std;


int main()
{
	int t;
	int n,i;
	ll ans;
	int A[100003];
	cin>>t;
	while(t--)
	{
		cin>>n;
		ans=0;
		FOR(i,n)
		{
			cin>>A[i];
		}
		FOR(i,n)
		{
			ans+=n-(i+1);
		}
		cout<<ans<<endl;
		
     }		
		
	return 0;
}

