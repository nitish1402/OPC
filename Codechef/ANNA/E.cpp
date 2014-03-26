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
#define ll long double
#define number32 4294967296ull
#define MAX 100001
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;


int main()
{
	int t;
	cin>>t;
	map<char,int> p;
	p['A']=0;
	p['B']=1;
	p['C']=2;
	p['D']=3;
	p['E']=4;
	p['F']=5;
	p['G']=6;
	p['H']=7;
	p['I']=8;
	p['J']=9;
	p['K']=10;
	p['L']=11;
	p['M']=12;
	p['N']=13;
	p['O']=14;
	p['P']=15;
	p['Q']=16;
	p['R']=17;
	p['S']=18;
	p['T']=19;
	p['U']=20;
	p['V']=21;
	p['W']=22;
	p['X']=23;
	p['Y']=24;
	p['Z']=25;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		string t1,t2;
		int n1,n2;
        for(int i=0;i<a.length();i++)
        {
			t1+=p[a[i]]+'0';
			//cout<<p[a[i]]<<" "<<t1<<endl;
		}
		for(int i=0;i<b.length();i++)
        {
			t2+=p[b[i]]+'0';
		}
		n1=atoi(t1.c_str());
		n2=atoi(t2.c_str());
		int n3=n1+n2;
		string String =static_cast<ostringstream*>( &(ostringstream() << n3) )->str();
		string ans;
		for(int i=0;i<String.length();i++)
		{
			ans+=p[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
