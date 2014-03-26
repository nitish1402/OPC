#include <cctype>
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

using namespace std;

void init()
    {
		ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	}

 
int N,A[100002];
ll M[400002];
 
//build tree
void initialize(int node, int b, int e)
{   
     if(b==e) M[node]=b;
     else
     {
         initialize(2*node,b,(b+e)/2);
         initialize(2*node+1,(b+e)/2 + 1,e);
         
         if(A[M[2*node]]<=A[M[2*node+1]])
         {
			 M[node]=M[2*node];
		 }
		 else 
		     M[node]=M[2*node+1];
		     
     }
}
 
//return sum of A[i],A[i+1],...,A[j]
ll query(int node, int b, int e, int i, int j)
{
     if(i>e || j<b) return -1;
     if(i<=b && e<=j) return M[node];
     
     ll left=query(2*node,b,(b+e)/2,i,j);
     ll right=query(2*node+1,(b+e)/2 + 1,e,i,j);
     
     if(left==-1) return right;
     if(right==-1) return left;
     if(A[left]<A[right]) return left;
     return right;
    
}
 
int main()
{
	int n,i,j;
	int l,r,q;
	ll ans;
	init();
	cin>>n>>q;
	FOR(i,n)
	{
		cin>>A[i];
	}
	initialize(1,0,n-1);
	while(q--)
	{
		cin>>l>>r;
		ans=A[query(1,0,n-1,l,r)];
		cout<<ans<<endl;
	}
	return 0;
}
