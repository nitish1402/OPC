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
#define ll  long long
#define number32 4294967296ull
#define MAX 100001
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;

int main()
{
	int n,q;
	int i,j;
	cin>>n>>q;
	int A[1000001];
	FOR(i,n)
	{
		cin>>A[i];
	}
	sort(A,A+n);
	//int *pos=A;
	int rq=0;
	int *l,pos;
	int count=0;
	FOR(i,n)
	{
		rq=q-A[i];
		l=find(A+i+1,A+n,rq);
		pos=l-A;
		//cout<<rq<<" "<<*l<<" "<<l-A<<endl;
		if(*l==rq && rq>0)
		{
            A[i]=-1;
            A[pos]=-1;
            //(A+n-l)=-1;
            count++;
            //cout<<*l<<" "<<A+i+n-l<<endl;
		}
		else continue;		
		//cout<<*l<<" "<<A+n-l<<endl;
	}
		
		
	cout<<count<<endl;
	//l=find(A,A+n,3);
	
	return 0;
}
