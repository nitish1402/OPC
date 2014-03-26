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

 
int N,A[1000002];

 


int main ()
{
	int n,i,j;
	int l,r,q;
	int count=0,c;
	ll ans;
	cin>>n>>q;
	FOR(i,n)
	{
		cin>>A[i];
	}
	
	while(q--)
	{
		bool flag[101]={false};
        count=0;
        cin>>l>>r;
        for(int j=l-1;j<r;j++){
            c=A[j];
            if(flag[c]==false){
                flag[c]=true;
                count++;
            }
        }
        cout<<count<<endl;
	}
	return 0;
	
}
