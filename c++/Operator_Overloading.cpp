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
#define ll   long long
#define number32 4294967296ull
#define MAX 1000005
#define len(s) s.length()
#define MOD 1000000007
#define ff first
#define ss second
#define all(C) (C.begin(),C.end())

//shorter Containers
#define Mii map<int,int>
#define Mci map<char,int>
#define Msi map<string,int>
#define Si set<int>
#define Sc set<char> 
#define Ss set<string> 
#define Pii pair<int,int>
#define PLL pair<ll,ll>
#define Pci pair<char,int> 
#define Psi pair<string,int>
#define vi vector<int> 
#define vl vector<ll>
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
#define PLLi pair<ll,ll>::iterator
#define vii vector<int>::iterator 
#define vci vector<int>::iterator 
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();
using namespace std;

enum days{MON,TUE,WED,THU,FRI,SAT,SUN};

//this operator increases the day by 1
inline days operator+ (days d)
{
	return static_cast<days>((static_cast<int>(d)+1)%7);
}

inline days operator- (days d)
{
	return static_cast<days>((static_cast<int>(d)-1)%7);
}

inline days operator* (days d,days d1)
{
	return static_cast<days>((static_cast<int>(d)*static_cast<int>(d1))%7);
}

inline days operator/ (days d,days d1)
{
	return static_cast<days>((static_cast<int>(d)/static_cast<int>(d1))%7);
}

ostream& operator <<(ostream& out ,days d)
{
	switch(d)
	{
		case SUN:out<<"SUN"; break;
		case MON:out<<"MON"; break;
		case TUE:out<<"TUE"; break;
		case WED:out<<"WED"; break;
		case THU:out<<"THU"; break;
		case FRI:out<<"FRI"; break;
		case SAT:out<<"SAT"; break;
	}
	return out;
}
		 
int main()
{
	days d;
	d=SUN;
	days d1=THU;
	+d;
    cout<<-d<<endl;
	cout<<+d<<endl;
	cout<<d1*d<<endl;
	cout<<d1/d<<endl;
	return 0;
}
