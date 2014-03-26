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
	int n,t,i,j;
	cin>>t;
	while(t--)
	{
		bool f1=false;
		bool f2=false;
		int c1=0,c2=0;
		int x1=0,x2=0;
		cin>>n;
	    char M[51][51];
	    FOR(i,n)
	    {
			FOR(j,n)
			{
				cin>>M[i][j];
			}
		}
		
		//row check
		for(i=0,j=n-1;i<n/2&&j>=n/2;i++,j--)
		{
			c1=0;
			for(int k=0;k<n;k++)
			{
			//	cout<<M[i][k]<<" "<<M[j][k]<<endl;
				if(M[i][k]==M[j][k])
				{
					//cout<<M[i][k]<<" "<<M[j][k]<<endl;
					c1++;
				}
			}
			if(c1==n) x1++;
		}
		//cout<<x1<<endl;
			
				
				
				for(i=0,j=n-1;i<n/2&&j>=n/2;i++,j--)
				{
					c2=0;
					for(int k=0;k<n;k++)
			        {
					
				//	cout<<M[k][i]<<" "<<M[k][j]<<endl;
 				     if(M[k][i]==M[k][j])
				     {
					  c2++;
					//cout<<"kaka"<<endl;
				     }
				
			    }
			  //  cout<<c2<<endl;
			      if(c2==n) {x2++;}
			}
			
			//cout<<x2<<endl;
			if(x1==n/2) f1=true;
			if(x2==n/2)   f2=true;
			
 			if(f1==true && f2==true) cout<<"BOTH"<<endl;
			else if(f1 && !f2)  cout<<"HORIZONTAL"<<endl;
			else if(!f1 && f2)    cout<<"VERTICAL"<<endl;
			else cout<<"NO"<<endl;
		}
		
	return 0;
}
