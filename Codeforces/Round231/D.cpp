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
#define ll   long long
#define number32 4294967296ull
#define MAX 1000005
#define len(s) s.length()
#define MOD 1000000007
#define ff first
#define ss second
#define all(C) (C.begin(),C.end())
#define pb(k) push_back(k)
#define mp(i,j) make_pair(i,j) 

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
#define vli vector<ll> :: iterator 
#define vci vector<int>::iterator 
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();


int main()
{
	string s;
	int c1,c2,c3;
	
	int i;
	cin>>s;
	int in=s.find('+');
	int in1=s.find('=');
	c1=in;
	c2=in1-in-1;
	c3=len(s)-in1-1;
	
	if(c1+c2==c3)
	{
		cout<<s<<endl;
		return 0;
	}
	
	int diff=c3-(c1+c2);
	string s1,s2,s3;
	if(diff==2)
	{  if(c1>c2)
	{
		FOR(i,c1+c2+c3+2)
		{
			s1+='|';
		}
		s1[in]='+';
		s1[in1+1]='=';
	
	cout<<s1<<endl;
	return 0;
}
	else
	{
		
		FOR(i,c1+c2+c3+2)
		{
			s1+='|';
		}
		s1[in]='+';
		s1[in1+1]='=';
	
	cout<<s1<<endl;
	return 0;
		
	}
	
	   
	}
	
	else if(diff==-2)
	{
		if(c1>c2){
		FOR(i,c1+c2+c3+2)
		{
			s2+='|';
		}
		s2[in-1]='+';
		s2[in1-1]='=';
		
	cout<<s2<<endl;
  
	return 0;
    }
    else 
    {
	   FOR(i,c1+c2+c3+2)
		{
			s2+='|';
		}
		s2[in]='+';
		s2[in1-1]='=';
		
	cout<<s2<<endl;
	return 0;
}	

	}
		
	else cout<<"Impossible\n";	
	//cout<<s1<<endl;
	//cout<<c1<<" "<<c2<<" "<<c3<<endl;
	return 0;
}
