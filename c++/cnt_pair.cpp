// This programm count the frequency of input strings

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
#define MAX 100001
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

const int num=127587253;
using namespace std;

struct Pair
{
	string buffer;
	double val;
};

vector<Pair>  P;

double& value(string str)
{
	int i;
	FOR(i,P.size())
	{
		if(str==P[i].buffer)  return P[i].val;
	}
	Pair k={str,0};
	P.push_back(k);
	return P[P.size()-1].val;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string search;
		cin>>search;
		value(search)++;
	}
	for(vector<Pair>::const_iterator it=P.begin();it!=P.end();it++)
	{
		cout<<it->buffer<<" "<<it->val<<endl;
	}
	return 0;
}
	
	
