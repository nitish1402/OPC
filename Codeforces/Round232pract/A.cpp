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

int A[101]={0};
int main()
{
	int n;
	int i,j;
	cin>>n;
	int x,y;
	int l,r;
	cin>>x>>y;
	FORI(i,1,n)
	{
		cin>>l>>r;
		FORI(j,l,r+1)
		{
			A[j]=1;
		}
	}
	
	int c=0;
	int k=0;
	FORI(i,x,y+1)
	{
		if(A[i]==0)
		{
			continue;
		}
		else
		{
			cout<<i<<" "<<k<<endl;
			c+=i-k;
			k=i;
		}
		
	}
	
	cout<<c<<endl;
    return 0;
}
