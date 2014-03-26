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

using namespace std;

int main()
{
	int t,i,j;
	int n;
	cin>>n;
	vector<string> p;;
	FOR(i,n)
	{
		string k;
		cin>>k;
		p.push_back(k);
	}
	set<char>k;
	int in=p[0].size();
	char ch=p[0][in-1];
	int ar[9];
	int in1=0;
	int lm=1;
	while(lm<n)
	{
	 for(i=lm;i<n;i++)
	 {
		if(p[i][0]==ch)
		{
			ar[in++]=i;
			ch=p[i][p[i].size()-1];
			lm=i+1;
		}
	}
}
			
	FOR(i,in)
	{
		for(j=0;j<p[ar[i]].size();j++)
		{
			k.insert(p[ar[i]][j]);
		}
	}
	cout<<k.size()<<endl;
  return 0;
}
