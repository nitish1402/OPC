/* @author :nitish bhagat */

//header files
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

using namespace std;

//short lazieeeeeee
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll  long long
#define number32 4294967296ull
#define MAX 100001
#define len(s) s.length()
#define ff first
#define ss second

using namespace std;

//containers
typedef map<int,int> Mii;
typedef map<char,int> Mci;
typedef map<string,int> Msi;
typedef set<int> Si;
typedef set<char> Sc;
typedef set<string> Ss;
typedef pair<int,int> Pii;
typedef pair<char,int> Pci;
typedef pair<string,int> Psi;
typedef vector<int> vi;
typedef vector<int> vc;
typedef vector<ll> vl;

//iterators
typedef map<int,int>::iterator Miii;
typedef map<char,int>::iterator Mcii;
typedef map<string,int>::iterator Msii;
typedef set<int>::iterator Sii;
typedef set<char>::iterator Sci;
typedef set<string>::iterator Ssi;
typedef vector<int>::iterator vii;
typedef vector<int>::iterator vci;


///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

ll mod=1000000009;
 
inline ll  MOD(ll a)
{
   if(a>mod) return a%mod;
   else if(a==mod) return 0ll;
   return a;
}

inline ll expo(ll a, int b){
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
  
int main()
{
	int t;
	ll n,m;
	cin>>t;
	while(t--)
	{
		cin>>n;
		m=MOD(expo(10,n)/2-expo(8,n)/2+mod);
		cout<<m<<endl;
	}
     return 0;
}
