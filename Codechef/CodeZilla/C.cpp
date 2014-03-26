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

int maze[1001][1001],stat[1001][1001]={{0},{0}};

static int ans=10000000;
static int c1=0,c2=0,c3=0,c4=0;

void fun(int i,int j,int n,int m,int cont)
{
 
 
if(i==n-1 && j==m-1)
{
	//cout<<"i am here"<<" "<<c1<<" "<<c2<<" "<<c3<<" "<<c4<<endl;
	c1=c2=c3=c4=0;
	if(cont!=0)
	ans=min(ans,cont);
	cont=0;
} 
 
else if(stat[i][j]==0)
{

   stat[i][j]=1;
   if(i+1<n && maze[i+1][j]==0)
     fun(i+1,j,n,m,cont++),c1++;
   if(i-1>=0 && maze[i-1][j]==0)
     fun(i-1,j,n,m,cont++),c2++;
 
   if(j+1<m && maze[i][j+1]==0)
     fun(i,j+1,n,m,cont++),c3++;
   if(j-1>=0 && maze[i][j-1]==0)
     fun(i,j-1,n,m,cont++),c4++;
  
   stat[i][j]=0;
 }
}
int main()
{
	int t,n,m;
	cin>>t;
	while(t--)
	{
		char s[1001][1001];
		//cont=0;
		//ans=0;
		cin>>n>>m;
		int i,j;
		FOR(i,n)
		{
			FOR(j,m)
			{
				cin>>s[i][j];
				stat[i][j]=0;
				if(s[i][j]=='0') maze[i][j]=0;
				else maze[i][j]=1;
			}
		}
		int cont=0;
		if(maze[0][0]==0)
          fun(0,0,n,m,cont);
        if(ans==0)  cout<<"-1"<<endl;
        else cout<<ans+max(n,m)<<endl;
	}  
	
	return 0;
}
