#include <cassert> 
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
#include <stdint.h>
#include <queue>
#include <iomanip>
#include <utility>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<=(int)n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll unsigned long long int
#define mod 1000000007
#define MAX 1000000000ull

using namespace std;

bool flag;

ll expo(ll a,int b)
{
	ll result = 1;
	
    while (b){
      if (b&1){
		 
        result =(result* a);
        if(result>1000000000)
        {
			flag=true;
			break;
		}
			
      }
      b >>=1 ;
      a =(a*a);
     
    }

  return result;
}

int main()
{
	int t;
	ll l,d,s,c;
	ll pow1,ans,fac;
	scanI(t);
	while(t--)
	{
		flag=false;
		ans=0;
		pow1=0;
		fac=0;
		scanf("%llu%llu%llu%llu",&l,&d,&s,&c);
	    double lhs,rhs;
	    lhs=pow((double)l/s,(double)1/(d-1));
	    rhs=double(1+c);
	   // cout<<lhs<<" "<<rhs<<endl;
	    if(lhs<=rhs)
	    {
			cout<<"ALIVE AND KICKING\n";
		}
		else
		{
			cout<<"DEAD AND ROTTING\n";
		}
			/*if(ans>=l || flag)
			{
				cout<<"ALIVE AND KICKING\n";
			}
			else if(ans<l) cout<<"DEAD AND ROTTING"<<endl;
			* */
	}
	return 0;
}
