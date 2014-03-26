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
#define MAX 100001
#define len(s) s.length()

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

//here we are trying to define a function to replace spaces by %20
void replaceSpace(char *s)
{
	int l=strlen(s);
	if(l<0)  return ;
	int original_length=l;
	int i;
	cout<<l<<endl;
	//for(i=0;i<l;i++)
	//cout<<**s++<<endl;
	int num_space=0;
	for(i=0;i<l;i++)
	{
		//cout<<"vv"<<*(s+i)<<endl;
		if(s[i]==' ')
		{
			num_space++;
		}
	}
	int new_length=original_length+2*num_space;
	s=(char *)realloc(s,new_length);
	//new_length--;
	//original_length--;
    while(original_length>0 && new_length>original_length)
    {
		if(s[original_length]==' ')
		{
			s[new_length--]='0';
			s[new_length--]='2';
			s[new_length--]='%';
		}
		else
		{
			s[new_length--]=s[original_length];
		}
		original_length--;
	}
	FOR(i,l)
	{
		cout<<s[i]<<" ";
	}
	cout<<s<<endl;
}
int main()
{
	 char *str;
	 str=(char*)malloc(13*sizeof(char));
	 strcpy(str,"we are happy");
	 replaceSpace(str);
	 cout<<str<<endl;
	 
     return 0;
}
