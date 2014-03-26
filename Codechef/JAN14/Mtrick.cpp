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
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;


ll addmod(ll x, ll y, ll c)
{
	ll no32,rem;
    if(x>1000000000 && y>1000000000)
    {
		no32=x/number32;
		rem=x%number32;
		x=((no32%c)*(number32%c))%c+rem%c;
		no32=y/number32;
		rem=y%number32;
		y=(no32%c*number32%c)%c+rem%c;
		x=(x+y)%c;
	}
	else if(x>1000000000 && y<1000000000)
	{
		no32=x/number32;
		rem=x%number32;
		x=((no32%c)*(number32%c))%c+rem%c;
		x=(x+y)%c;
	}
	else if(x<1000000000 && y>1000000000)
	{
		no32=y/number32;
		rem=y%number32;
	y=(no32%c*number32%c)%c+rem%c;
		x=(x+y)%c;
	}
	else
	{
		
		x=(x+y)%c;
	}
	return x;
		
		
}



ll mulmod(ll a,ll b, ll m) {
    ll res = 0;
    ll temp_b;

    /* Only needed if b may be >= m */
    if (b >= m) {
        if (m > 1000000000000000000ull / 2u)
            b -= m;
        else
            b %= m;
    }

    while (a != 0) {
        if (a & 1) {
            if (b >= m - res) /* Equiv to if (res + b >= m), without overflow */
                res -= m;
            res += b;
        }
        a >>= 1;

        /* Double b, modulo m */
        temp_b = b;
        if (b >= m - b)       /* Equiv to if (2 * b >= m), without overflow */
            temp_b -= m;
        b += temp_b;
    }
    return res;
}

int main()
{
     int t,i,j;
     int n;
     ll a,b,c,add,mul;
     ll A[1005]={0};
     string str;
     scanI(t);
     while(t--)
     {
		 add=0;
		 mul=1;
         scanI(n);
         FOR(i,n)
         {
            scanf("%lld",&A[i]);
         }
         scanf("%llu%llu%llu",&a,&b,&c);
         cin>>str;
         for(i=0;i<n;i++)
         {
           if(str[i]=='A')
           {
			 add=addmod(add,a,c);
             //  cout<<add<<endl;   
           }
           
           //cout<<"\n";
           else if(str[i]=='M')
           {
			   add=mulmod(add,b,c);
			   mul=mulmod(mul,b,c);
           }
           else if(str[i]=='R')
           {
              reverse(A+i,A+n);
           }
            A[i]=addmod(mulmod(A[i],mul,c),add,c);
       
	  }
          FOR(i,n)
          {
			  if(i==n-1)  printf("%lld",A[i]%c);
              else printf("%lld ",A[i]%c);
          }
          printf("\n");
        }
   return 0;
}

