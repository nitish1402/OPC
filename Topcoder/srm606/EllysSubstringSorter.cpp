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

//strategy find the smallest element in the string

class EllysSubstringSorter {
public:
	string getMin(string S, int L)
	{
		string p,q,r,s;
		int i,in,l1,l2,l3;
		p=S;
		sort(p.begin(),p.end());
		cout<<p<<endl;
		char ch=p[0];
		in=0;
		FOR(i,S.length())
		{
			if(S[i]!=ch)
			{
				in=i;
				break;
			}
		}
		l1=in-0;
		l2=L;
		l3=S.length()-(l1+l2);
		s=S.substr(0,l1);
		q=S.substr(in,l2);
		r=S.substr(l1+l2,l3);
		sort(q.begin(),q.end());
		p=s+q+r;
		//cout<<s<<" "<<q<<" "<<r<<endl;
		//cout<<p<<endl;
		return p;
	}
};

//AAAWDIUAOIWDESBEAIWODJAWDBPOAWDUISAWDOOPAWD
int main()
{
	EllysSubstringSorter s;
    int t;
    cin>>t;
    while(t--)
    {
		string k;
		int l;
		cin>>k>>l;
		
	s.getMin(k,l);
}
	return 0;
}
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!
