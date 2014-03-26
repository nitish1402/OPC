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
#include <utility>
#include <set>
#include <stack>
#include <queue>
#include <iomanip>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define mod 1000000007
#define ll  long long

using namespace std;
//2*a(n-1)+a(n-2). 


int main()
{
	ll limit=1000000000000001ull;
	ll a,b;
	a=1;
	b=3;
	ll A[60]={0};
	A[0]=1;
	A[1]=3;
	int i=2;
	while(A[i]<limit)
	{
		A[i]=2*A[i-1]+A[i-2];
		i++;
	}
	FOR(i,42)
	{
		cout<<A[i]<<endl;
	}
     cout<<i<<endl;
	ll t;
	cin>>t;
	ll left[20];
	ll right[20];
	ll lw=0;
	ll rw=t;
	ll *p =upper_bound(A,A+40,t);
     int key=p-A;
   //cout<<key<<endl;
   int s_lim=key;
   int li=0;
   int ri=0;
   //cout<<rw<<endl;
  // lw=A[key];
   // cout<<A[key]<<endl;
		rw+=A[key-1];
		//cout<<rw<<endl;
		right[ri++]=A[key-1];
		for(i=key;i>=0;i=i-1)
		{
			if(lw==rw)  break;
			if(lw+A[i]>rw) i-=2;
			lw+=A[i];
			left[li++]=A[i];
		}
	
	sort(left,left+li);
	sort(right,right+ri);
	
	for(i=0;i<li;i++)
	{
		cout<<left[i]<<endl;
	}
	cout<<endl;
	for(i=0;i<ri;i++)
	{
		cout<<right[i]<<endl;
	}
    		
}
