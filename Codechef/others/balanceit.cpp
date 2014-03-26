#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
#define scan1(i) scanf("%d",&i)
#define ll long long
#define mod 1000000007
using namespace std;
int scan()
{
int t=0;
char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9')
{
t=(t<<3)+(t<<1)+c-'0';
c=getchar_unlocked();
}
return t;
}   

using namespace std;

int main()
{
  int t,n;
  ll ans=1;
  t=scan();
  while(t--)
  {
    ans=1;
    n=scan();
    for(int i=2;i<=n;i++)
    {
     // cout<<ans<<endl;
      ans=((ans%mod)*(2*i-1)%mod)%mod;
    }
    printf("%lld\n",ans);
  }
  return 0;
}


