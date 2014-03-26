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
#define ll  long long
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;
typedef vector<int> VI;
int a[151][151];
int mark[151];


int scan()
{
   int t=0;
   char c;
   c=getchar_unlocked();
   while(c<'0' || c>'9')
     c=getchar_unlocked();
     while(c>='0' && c<='9')
     {
        t=(t<<3)+(t<<1)+c-'0';
        c=getchar_unlocked();
     }
   return t;
} 

bool dfs(int n,int no)
{
	int v;
	if(no==0)  return true;
	for(int i=0;i<n;i++)
	{
	  if(mark[i]==0)
	  {
	   for(v=0;v<n;v++)
	   {
		//   cout<<a[i][v]<<endl;
		   if(mark[v]==0 && a[i][v]==1)
		   {
			   mark[i]=1;
			   mark[v]=1;
//			   no=n-2;
			   if(dfs(n,no-2))
			      return true;
			   else
			   {
				   mark[i]=0;
				   mark[v]=0;
			   }
		   }
	   }
       /*if(v==n)*/ return false;
     }
   }
   return false;
}
			   

int main()
{
	int t,i,j;
	int n,m,u,v;
	scanI(t);
	while(t--)
	{
		FOR(i,150)
		{
			mark[i]=0;
			FOR(j,150)
			{
				a[i][j]=0;
			}
		}
		scanf("%d%d",&n,&m);
	    FOR(i,m)
	    {
			scanf("%d%d",&u,&v);
			u--;
			v--;
			a[u][v]=1;
			a[v][u]=1;
		}
		if(dfs(n,n)) puts("YES");
		else puts("NO");
		
	}
	return 0;
}
		
		

