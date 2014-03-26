#include<iostream>
#include<stdio.h>
#define ll long long
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

int main()
{
   int t;
   ll n,m,ans,ans1;
   t=scan();
   while(t--)
   {
     scanf("%lld",&n);
     scanf("%lld",&m);
     if(m==0) printf("0 %lld\n",n);
     else 
     {
       ans=n/m;
       ans1=n%m;
       printf("%lld %lld\n",ans,ans1);
    }
   }
   return 0;
}

