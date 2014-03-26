#include<iostream>
#include<cstdio>
#define ll long long
using namespace std;
int dp[26][100001];
ll mod;

inline ll  MOD(ll a)
{
   if(a>mod) return a%mod;
   else if(a==mod) return 0ll;
   return a;
}
ll expo(ll a, int b){
  ll result = 1;

  while (b){
    if (b&1){
      result =MOD(result* a);
    }
    b >>=1 ;
    a =MOD(a* a);
  }

  return result;
} 
ll func(ll x,int n){
       if(n==0) return (1);
        ll dvd=func(x,n/2);
        if((n&1)==0) return  MOD(dvd*dvd);
           else return MOD(MOD(x*dvd)*dvd);
}
inline ll scan1()
{
    long long x;
    int c = getchar();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = getchar());
    if(c=='-') {neg=1;c=getchar();}
    for(;c>47 && c<58;c = getchar()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
    return x;
}
 
inline int scan()
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

int main()
{
   int p[27]={0,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
   int n,query,l,r,i,j,k,num,pcount,power2[20];
   ll ans,prime;
   //scanf("%d",&n);
   n=scan();
   for(i=1;i<=n;i++)
   {
      //scanf("%d",&num);
      num=scan();
      for(j=1;j<26;j++)
      {
         while(num%p[j]==0)
         {
           num/=p[j];
           dp[j][i]++;
           if(num==0) break;
         }
           
      }
    }
    for(i=1;i<26;i++)
    {
     for(j=2;j<=n;j++)
     {
       dp[i][j]=dp[i][j]+dp[i][j-1];
      // printf("%d ",dp[i][j]);
     }
     //printf("\n");
    }
    //scanf("%d",&query);
    query=scan();
    while(query--)
    {
        l=scan();
        r=scan();
        mod=scan1();
        //scanf("%lld",&mod);
        if(mod==1) ans=0;
        else{
        ans=1%mod;
        for(j=1;j<26;j++)
        {
           prime=p[j];
           pcount=dp[j][r]-dp[j][l-1];
           if(pcount>0)
           {
             ans=MOD((ans)*MOD(expo(prime,pcount)));
           }
                                     
        }}
        printf("%lld\n",ans);
    }
    return 0;
}

