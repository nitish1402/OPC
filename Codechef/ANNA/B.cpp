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
#include <utility>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define MAX 2000004
#define MOD 1000000007
#define ll  long long int

 
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();
 
using namespace std;
ll fact[MAX],ifact[MAX];

 
ll power(ll n,int m)
{
   if(m==0) return 1;
   ll x=power(n,m/2);
   if(m%2==0)
        return (x*x)%MOD;
   else
        return (((x*x)%MOD)*n)%MOD;
}
 
void preProcess()
{
  fact[0]=1;
  ifact[0]=1;
  int i;
  for(i=1;i<MAX;i++)
  {
      fact[i]=fact[i-1]*i;
      fact[i]%=MOD;
  }
  ifact[2000000] = power(fact[2000000],MOD-2);
  for(i=2000000;i>1;i--)
     ifact[i-1] = ifact[i]*i%MOD;
}
 
ll comb(int a,int b)
{
return (((fact[a]*ifact[b])%MOD)*ifact[b+1])%MOD;
}


int main()
{
    preProcess();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d",&n);
        ll ans=0;
        ll ans1=0;
        ans=comb(2*n,n);
       // printf("%lld\n",ans);
        ans%=MOD;
        printf("%lld\n",ans);
     }
return 0;
}
