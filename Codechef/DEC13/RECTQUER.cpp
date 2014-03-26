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

void out(int n) {
	if(n<0){
		n=-n;putchar_unlocked('-');
	}
	int i=10;
	char output_buffer[11];
	output_buffer[10]='\n';
	do{
		output_buffer[--i]=(n%10)+'0';n/=10;
	}while(n);
	do{
		putchar_unlocked(output_buffer[i]);
	}
	while(++i<11);
}  

using namespace std;

ll A[401][401];
ll T[11][350][350];
int main()
{
	int t,i,j,k,q,num;
	int n;
	ll ans=0;
	int x1,y1,x2,y2;
	cin>>n;
	map<ll,ll> P;
	FORI(i,1,n)
	{
		FORI(j,1,n)
		{
			A[i][j]=scan1();
		}
	}
	
	FORI(k,1,10)
	{
		FORI(i,1,n)
		{
			FORI(j,1,n)
			{
				if(A[i][j]==k)
				{
					T[k][i][j]=1;
				}
				else
				    T[k][i][j]=0;
			}
		}
	}
	FORI(k,1,10)
	{
		FORI(i,1,n)
		{
			FORI(j,2,n)
			{
				T[k][i][j]+=T[k][i][j-1];
			}
		}
	}
	
	q=scan1();
	while(q--)
	{
		ans=0;
		x1=scan1();
		y1=scan1();
		x2=scan1();
		y2=scan1();
		if((y1)!=1)
		{
			FORI(i,1,10)
			{
				FORI(j,x1,x2)
				{
					if((T[i][j][y2]-T[i][j][y1-1])>0)
					{
						ans++;
						break;
					}
				}
			}
		}
		else
		{
			FORI(i,1,10)
			{
				FORI(j,x1,x2)
				{
					if(T[i][j][y2]>0)
					{
						ans++;
						break;
					}
				}
				
		    }
		}
		out(ans);
	}
		
	return 0;
}

