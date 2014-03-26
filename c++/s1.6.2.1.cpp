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

int main()
{
	string s,temp;
	int i,j;
	while(getline(cin,temp))
	{
		
		//cin>>temp;
		FOR(i,len(temp))
		{
			
			if(temp[i]=='/'&&temp[i+1]=='/')
			{
				FOR(i,len(temp))
				{
					temp[i]='\0';
				}
			}
		}
		s+=temp+"\n";
	}
	cout<<s<<endl;
	FOR(i,len(s))
	{
		if(s[i]=='/'&& s[i+1]=='*')
		{
			s[i]='\0';
			s[i+1]='\0';
			for(j=i+2;;j++)
			{
			//	cout<<s[j]<<" "<<s[j+1]<<endl;
			    if(s[j]=='*' && s[j+1]=='/')  break;
				s[j]='\0';
			}
			s[j]='\0';
			s[j+1]='\0';
		//	i+=j;
		}
		
	}
	cout<<s<<endl;
	return 0;
}
