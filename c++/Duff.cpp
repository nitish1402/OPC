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


void send(int* to,int* from ,int count )
{
	int n=(7+count)/8;
	
	switch(count%8)
	{
		case 0: do{ *to++=*from++, cout<<"0"<<" ";
		case 7:     *to++=*from++, cout<<"7"<<" ";
		case 6:     *to++=*from++, cout<<"6"<<" ";
		case 5:     *to++=*from++, cout<<"5"<<" ";
		case 4:     *to++=*from++, cout<<"4"<<" ";
		case 3:     *to++=*from++, cout<<"3"<<" ";
		case 2:     *to++=*from++, cout<<"2"<<" ";
		case 1:	    *to++=*from++, cout<<"1"<<" ";
	    }  while(--n>0);
	}
}

int main()
{
	int i,j;
	int A[100]={1,2,3,4,5,6,7,8,9,10};
	int B[100]={1,1,1,1,1,1,1,1,1,1};
	
	int *p1,*p2;
	p1=&A[0];
	p2=&B[0];
	
	cout<<*p1<<" duff suff duff"<<*p2<<endl;
	send(p1,p2,7);
	cout<<endl;
		cout<<*p1<<" duff suff duff"<<*p2<<endl;
	cout<<endl;
	
	FOR(i,10)
	{
		cout<<A[i]<<" "<<B[i]<<endl;
	}
	return 0;
}
