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
#define ll unsigned long long

using namespace std;

 
int N,A[1000002];
ll M[4000002];
 
//build tree
 
//build tree
void initialize(int node, int b, int e)
{   
     if(b==e) M[node]+=1;
     else
     {
         initialize(2*node,b,(b+e)/2);
         initialize(2*node+1,(b+e)/2 + 1,e);
         
         if(A[M[2*node]]!=A[M[2*node+1]])
         {
			 M[node]+=1;
		 }
		 else 
		     M[node]+=0;
		     
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
     else if(right==-1) return left;
     else return (left+right);
}
 
//update A[index]
void update(int node, int b, int e, int index)
{
     if(b==e) M[node]=A[b];
     else
     {
         int mid=(b+e)/2;
         
         if(b<=index && index<= mid) update(2*node,b,mid,index);
         else update(2*node+1,mid + 1,e,index);
         
         M[node]=(M[2*node]+M[2*node+1]);
     }
}


int main()
{
	int i,j,N,q,maxi;
    ll ans;
    char c;
    scanf("%d%d",&N,&q);
    FOR(i,N)
      scanf("%d",&A[i]);
    
   initialize(1,0,N-1);
   int l=0;
    while(q--)
    {
		ans=0;
		cin>>c>>i>>j;
		
		if(c=='S') //sum
		{
			ans=query(1,0,N-1,i,j);
			cout<<ans<<endl;
		}
		else if(c=='G')
		{
			A[i]+=j;
			update(1,0,N-1,i);
		}
		else if(c=='T')
		{
			A[i]-=j;
			update(1,0,N-1,i);
		}
	}
	return 0;
}


