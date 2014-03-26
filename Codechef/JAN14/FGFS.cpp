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
#define FORI(i,a,n) for(i=a;i<=n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define mod 1000000007
#define ll unsigned long long int

 
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();
 
using namespace std;


map<ll, vector< pair<ll,ll> > > M;

bool sort1(const pair<ll,ll> f, const pair<ll,ll> s)
{
	return  f.second<s.second?1:0;
	
}

inline ll scan1()
{
    long long x;
    int c = getchar();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = getchar());
    if(c=='-') {neg=1;c=getchar();}
    for(;c>47 && c<58;c = getchar()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
    return x;
}
 
 
int main()
{
    int t,i,n;
    ll k,s,f;
    scanI(t);
    ll count=0;
    while(t--)
    {
		M.clear();
		scanf("%d",&n);
		k=scan1();
		FOR(i,n)
		{
			s=scan1();
			f=scan1();
			k=scan1();
			//scanf("%lld%lld%lld",&s,&f,&k);
			pair<ll,ll> nit;
			nit.first=s;
			nit.second=f;
			M[k].push_back(nit);
		}
		vector<pair<ll,ll> > vii;
		count=0;
		for(map<ll, vector< pair<ll,ll> > >::iterator it=M.begin();it !=M.end();++it)
		{
			vii=it->second;
			//sorting acc. to finish time
         	sort(vii.begin(),vii.end(),sort1);
	        ll start = vii[0].first;
	        ll finish= vii[0].second;
            count++;
	        for(vector<pair<ll,ll> >::iterator it1 = vii.begin();it1!=vii.end();it1++)
		    {
				if(finish<=it1->first)
				{
					count++;
					finish=it1->second;
				}
				else continue;	
				
 
		    }
 
			
		}
		printf("%lld\n",count);
		M.clear();
	}
	return 0;
}
			
    



