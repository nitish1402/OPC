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

//short lazieeeeeee
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll  long long
#define number32 4294967296ull
#define MAX 1000005
#define len(s) s.length()
#define MOD 1000000007

//shorter Containers
#define Mii map<int,int>
#define Mci map<char,int>
#define Msi map<string,int>
#define Si set<int>
#define Sc set<char> 
#define Ss set<string> 
#define Pii pair<int,int>
#define Pci pair<char,int> 
#define Psi pair<string,int>
#define vi vector<int> 
#define vc vector<int> 

//iterators
#define Miii map<int,int>::iterator 
#define Mcii map<char,int>::iterator 
#define Msii map<string,int>::iterator 
#define Sii set<int>::iterator 
#define Sci set<char>::iterator 
#define Ssi set<string>::iterator 
#define Piii pair<int,int>::iterator 
#define Pcii pair<char,int>::iterator 
#define Psii pair<string,int>::iterator 
#define vii vector<int>::iterator 
#define vci vector<int>::iterator 
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();
using namespace std;

 ll A[MAX],B[MAX];
 
int main()
{
	 int t;
	 int i,j,k,n,m;
	 ll x,y;
	 cin>>t;
	 while(t--)
	 {
		 cin>>m>>n;
		 m--;
		 n--;
		 fill(A,A+MAX,0);
		 fill(B,B+MAX,0);
		 FOR(i,m)  //horizontal cuts
		 {
			 cin>>A[i];
		 }
		 FOR(i,n) //vertcal cuts
		 {
			 cin>>B[i];
		 }
		 sort(A,A+m);
		 sort(B,B+n);
		 
		 //now have to check out of both sorted segments which we have to take first
		 x=1;
		 y=1;
		 ll ans=0;
		 m--;
		 n--;
		 while(m>=0 && n>=0)
		 {
			 if(A[m]>=B[n]) //here we cut a horizontal line so vertical comoponent increases by 1
			 {
				// cout<<A[m]<<" "<<B[n]<<endl;
				 ans=(ans%MOD+(A[m]%MOD*x%MOD)%MOD)%MOD;
				 m--;
				 y++;
			 }
			 else if(B[n]>A[m])
			 {
				 ans=(ans%MOD+(B[n]%MOD*y%MOD)%MOD)%MOD;
				 n--;
				 x++;
			 }
		 }
		 //cout<<ans<<" "<<x<<" "<<y<<endl;
		 //cout<<m<<" "<<n<<endl;
		 if(m>=0)
		 {
			 for(i=m;i>=0;i--)
			 {
				 ans=(ans%MOD+(A[i]%MOD*x%MOD)%MOD)%MOD;
			 }
		 }
		 if(n>=0)
		 {
			 for(i=n;i>=0;i--)
			 {
			//	 cout<<"Hello\t"<<B[i]<<endl;
				 ans=(ans%MOD+(B[i]%MOD*y%MOD)%MOD)%MOD;
			 }
		 }
		cout<<ans<<endl;		 
				 
	 }
     return 0;
}
