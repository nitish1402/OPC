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
#define ll long long
#define number32 4294967296ull
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;

ll expo(ll a, int b){
  ll result = 1;

  while (b){
    if (b&1){
      result =(result* a);
    }
    b >>=1 ;
    a =(a* a);
  }

  return result;
} 

int main()
{
   ll n,m,k,ans;
    double expon;
    int t;
    cin>>t;
    while(t--)
    {
          cin>>n>>k>>m;
          ll temp=n;
          int count=0;
          cout<<n<<endl;
          while(temp<=m)
          {
              temp=temp*k;
              count++;
              if(temp<0|| temp>=1000000000000000000ll) break;
		  }
		// cout<<temp<<endl;
          if(count==0) cout<<"0"<<endl;
          else cout<<count-1<<endl;
     }
} 
