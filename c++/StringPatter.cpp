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


bool match(char *string,char *pattern)
{
	if(*string=='\0' && *pattern=='\0')
	   return true;
	   
	if(*string!='\0' && *pattern=='\0') 
	   return false;
	   
	if(*(pattern+1)=='*')
	{
		if(*string==*pattern|| (*pattern=='.'&& *string!='\0')) 
		{
			return  match(string+1,pattern+2) || match(string+1,pattern) ||match(string,pattern+2) ;
		}
		
		else return match(string,pattern+2);
	} 
	
	
		if(*string==*pattern||(*pattern=='.' && *string!='\0'))
		{
			return match(string+1,pattern+1);
		}
	
	
	
	return false;
}


bool MatchIt(char *string,char *pattern)
{
	if(string==NULL|| pattern==NULL)
	{
		return false;
	}
	else return match(string,pattern);
}

int main()
{
	 char str1[20]={"aaaabbbcc"};
	 char str2[7]={"a*c*"};
	 
	 cout<<MatchIt(str1,str2)<<endl;
     return 0;
}
