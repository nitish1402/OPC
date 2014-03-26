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


class point
{
	public:
	    point(double vx,double vy)
	    {
			x=vx;
			y=vy;
		}
		
		point()
		{
			x=y=0;
		}
		
		void setx(double vx)
		{
			x=vx;
		}
		
		void sety(double vy)
		{
			y=vy;
		}
		
		double getx()
		{
			return x;
		}
		
		double gety()
		{
			return y;
		}
		
	private:
	   double x,y;
 };
 
 inline point operator +(point & p1,point &p2)
 {
	 point sum(p1.getx()+p2.getx(),p1.gety()+p2.gety());
	// sum={p1.getx()+p2.getx(),p1.gety()+p2.gety()};     //extended initialiser
	 return sum;
 }
 
 inline point operator *(point & p1,point & p2)
 {
	 point mul;
	 mul.setx(p1.getx()*p2.getx());
	 mul.sety(p1.gety()*p2.gety());
	 return mul;
 }
 
 ostream & operator <<(ostream & out,point & p1)
 {
	 out<<"("<<p1.getx()<<","<<p1.gety()<<")";
	 return out;
 }
 
 int main()
 {
	 point p(2,3);
	 point p1(3,4);
	 point c=p+p1;
	 point d=p*p1;
	 cout<<c<<endl;
	 cout<<d<<endl;
	 return 0;
 }	
