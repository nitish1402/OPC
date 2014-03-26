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
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll unsigned long long
#define number32 4294967296ull

///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;

string addelement(string word,char c,int i)
{
	string first=word.substr(0,i);
	string last=word.substr(i);
	return first+c+last;
}

vector<string> getPerms(string s)
{
	vector<string> permutations;
	
	if(s.length()==0)
	{
		permutations.push_back("");
		return permutations;
	}
	
	char first=s[0];
	string remainder=s.substr(1);
	vector<string> words=getPerms(remainder);
	vector<string>::iterator it;
	for(it=words.begin();it!=words.end();it++)
	{
		string word=*it;
		for(int j=0;j<=word.length();j++)
		{
			string f=word.substr(0,j);
	        string last=word.substr(j);
			permutations.push_back(f+first+last);
		}
	}
}

int main()
{
	vector<string> ans;
	ans=getPerms("NitishBHa");
	vector<string>::iterator it;
	for(it=ans.begin();it!=ans.end();it++)
	{
		cout<<*it<<endl;
	}
	return 0;
}
