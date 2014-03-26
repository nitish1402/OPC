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

int cnt[1000009];
int A[100009];
int ans=0;
void fun(int R)
{
	
	for (int i=1;i<=R;i++) {
      int k=0;//count of numbers that are divisible by i
        for (int j=i;j<=R;j+=i)
        k+=cnt[j];
      if (k>=2) ans=max(ans,i);//if count of number more than one, 
   //then we have two numbers with a divider i, 
   //and it is not necessarily maximum divisor of these numbers.
    }
}
	

int main()
{
	int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
		fill(A,A+n,0);
		fill(cnt,cnt+1000001,0);
		int mx=0;
		FOR(i,n)
		{
			cin>>A[i];
			mx=max(mx,A[i]);
			cnt[A[i]]++;
		}
		fun(mx);
		cout<<ans<<endl;
	}
	return 0;
}
