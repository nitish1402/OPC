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
#define mod 1
#define ll  long long

using namespace std;
//3*a(n-1)-a(n-2). 

inline ll  MOD(ll a)
{
   return a;
  
}

void matpower(ll M[2][2],int n){
       ll  w,x,y,z,a,b,c,d;
       int i,j,k;
       ll temp[2][2];
       ll temp1[2][2];
       ll cur[2][2]={{1,1},{1,0}};
        //long long  j=1000000007;

           if(n>1){
            matpower(M,n/2);
            FOR(i,2)
            {
				FOR(j,2)
				{
					temp[i][j]=0;
				}
			}
            //M[1][1]=0;
            FOR(i,2)
            {
				FOR(j,2)
				{
					FOR(k,2)
					{
					  temp[i][j]=MOD(MOD(temp[i][j]+MOD(M[i][k]*M[k][j])));
				  }
			  }
		    }
            //w=MOD(MOD(MOD(M[0][0]*M[0][0])+MOD(M[0][1]*M[1][0]))+mod);
            //x=MOD(MOD(MOD(M[0][0]*M[0][1])+MOD(M[0][1]*M[1][1]))+mod);
            //y=MOD(MOD(MOD(M[1][0]*M[0][0])+MOD(M[1][1]*M[1][0]))+mod);
            //z=MOD(MOD(MOD(M[1][0]*M[0][1])+MOD(M[1][1]*M[1][1]))+mod);
            FOR(i,2)
            {
				FOR(j,2)
				{
					M[i][j]=temp[i][j];
				}
			}
            //M[0][0]=w;
            //M[0][1]=x;
            //M[1][0]=y;
            //M[1][1]=z;

                  
       if(n%2!=0){
		   //M[1][1]=0;
		   FOR(i,2)
            {
				FOR(j,2)
				{
					temp1[i][j]=0;
				}
			}
			
			FOR(i,2)
            {
				FOR(j,2)
				{
					FOR(k,2)
					{
					  temp1[i][j]=MOD(MOD(temp1[i][j]+MOD(M[i][k]*cur[k][j])));
				  }
			  }
		    }
			
           //a=MOD(MOD(MOD(M[0][0]*1)+MOD(M[0][1]*1))+mod);
           //b=MOD(MOD(MOD(M[0][0]*1)+MOD(M[0][1]*0))+mod);
           //c=MOD(MOD(MOD(M[1][0]*1)+MOD(M[1][1]*1))+mod);
           //d=MOD(MOD(MOD(M[1][0]*0)+MOD(M[1][1]*0))+mod);
           FOR(i,2)
            {
				FOR(j,2)
				{
					M[i][j]=temp1[i][j];
				}
			}
           //M[0][0]=a;
           //M[0][1]=b;
           //M[1][0]=c;
           //M[1][1]=d;
          }
      }
}

ll fib(ll M[2][2],int n){//function for computation
       if(n==1)  return 1;
       else if(n==2)  return 1;
       else {
		   matpower(M,n-2);
           //long long j=1000000007;
           //std::cout<<M[0][0]<<" "<<M[0][1]<<std::endl;
           //std::cout<<M[1][0]<<" "<<MOD(M[1][1]+mod)<<std::endl;
       return MOD((MOD(MOD(M[0][0]*1)+MOD(M[0][1]*1))));
       }
}

using namespace std;

int main()
{
	int t;
	ll ans,n;
	ll A[49]={0,1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597,
	 2584, 4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229,
	  832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169,
	   63245986, 102334155, 165580141, 267914296, 433494437L, 701408733L, 1134903170L,7778742049L,12586269025L};
	cin>>t;
	while(t--)
	{
		cin>>n;
        if(binary_search(A,A+47,n))
        {
			cout<<"IsFibo"<<endl;
		}
		else 
		{
			cout<<"IsNotFibo"<<endl;
		}
	}
	return 0;
}
