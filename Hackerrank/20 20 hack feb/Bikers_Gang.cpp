/* @author :nitish bhagat */

//header files
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

using namespace std;

//short lazieeeeeee
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll   long long
#define number32 4294967296ull
#define MAX 1000005
#define len(s) s.length()
#define MOD 1000000007
#define ff first
#define ss second
#define all(C) (C.begin(),C.end())
#define pb(k) push_back(k)
#define mp(i,j) make_pair(i,j) 

//shorter Containers
#define Mii map<int,int>
#define Mci map<char,int>
#define Msi map<string,int>
#define Si set<int>
#define Sc set<char> 
#define Ss set<string> 
#define Pii pair<int,int>
#define PLL pair<ll,ll>
#define Pci pair<char,int> 
#define Psi pair<string,int>
#define vi vector<int> 
#define vl vector<ll>
#define vc vector<int> 

//iterators
#define Miii map<int,int>::iterator 
#define Mcii map<char,int>::iterator 
#define Msii map<string,int>::iterator 
#define Sii set<int>::iterator 
#define Sci set<char>::iterator 
#define Ssi set<string>::iterator 
#define Piii pair<int,int>::iterator 
#define Pcii pair<char,int>::iterator 
#define Psii pair<string,int>::iterator 
#define PLLi pair<ll,ll>::iterator
#define vii vector<int>::iterator 
#define vli vector<ll> :: iterator 
#define vci vector<int>::iterator 
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();



int main()
{
	PLL A[300];
	PLL B[300];
	int n,m,k;
	// m bikes n bikers  have to find shortest time for k
	vector<PLL> set[300]; 
	ll x,y;
	cin>>n>>m>>k;
	int i,j;
	FOR(i,n) //Bikes coordinates
	{
		cin>>x>>y;
		A[i].ff=x;
		A[i].ss=y;
	}
	
	FOR(i,m) //Bikers coordinates
	{
		cin>>x>>y;
		B[i].ff=x;
		B[i].ss=y;
	}
	//sort(A,A+n);
	//sort(B,B+m);
	vector<vl> V=vector<vl>(m+1);
	ll e_d; //euclid distance
	FOR(i,n)
	{
		FOR(j,m)
		{
			e_d=pow(abs(A[i].ff-B[j].ff),2)+pow(abs(A[i].ss-B[j].ss),2);
			V[i].push_back(e_d);  //sooring distances
		}
	}
	
	FOR(i,n)
	{
		FOR(j,m)
		{
			set[i].pb(mp(V[i][j],j));
		}
	}
	
	FOR(i,n)
	{
		FOR(j,n)
		{
			cout<<set[i][j].first <<" "<<set[i][j].second<<" ";
		}
		cout<<endl;
	}
	
	FOR(i,n)
	{
		sort(set[i].begin(),set[i].end());
	}
	
	FOR(i,n)
	{
		FOR(j,n)
		{
			cout<<set[i][j].first <<" "<<set[i][j].second<<" ";
		}
		cout<<endl;
	}
	
	ll _min=1000000000000000;
	ll _max=0;
    FOR(j,k)
    {
		FOR(i,n)
		{
			if(j==0)
			{
			  if(set[i][j].ff>_max)
			  {
				 _max=set[i][j];
			  }
			  if(set[i][j].ff<_min)
			  {
				 _min=set[i][j];
			  }
		    }
		    else 
		    {
			  if(set[i][j].ff>_max)
			  {
				  
	/*
	FOR(i,n)
	{
		FOR(j,m)
		{
			cout<<V[i][j]<<" ";
		}
		cout<<endl;
	}
	* */
	bool flag[300]={false};
	vl ans,ans1;
	int in=0;
	int minIn=0;
	FOR(i,n)
	{
		FOR(j,m)
		{
			if(flag[j]==false)
			{
			   if(_min>V[i][j])
			   {
				   _min=V[i][j];
				   minIn=j;
			   
			//   cout<<i<<" "<<j<<endl;
			  // cout<<_min<<" "<<V[i][j]<<endl;
		       }
			  // minIn=j;
		    }
		}  //completes here
		//cout<<minIn<<endl;
		flag[minIn]=true;
		ans.push_back(_min);
		_min=1000000000000000;
	}
	_min=1000000000000000000;
	minIn=0;
	bool flag1[300]={false};
	FOR(j,m)
	{
		FOR(i,n)
		{
			if(flag1[i]==false)
			{
			   if(_min>V[i][j])
			   {
				   _min=V[i][j];
				   minIn=i;
			   
			//   cout<<i<<" "<<j<<endl;
			  // cout<<_min<<" "<<V[i][j]<<endl;
		       }
			  // minIn=j;
		    }
		}  //completes here
		//cout<<minIn<<endl;
		flag[minIn]=true;
		ans1.push_back(_min);
		_min=1000000000000000;
	}
	sort(ans.begin(),ans.end());
	sort(ans1.begin(),ans1.end());
	
	FOR(i,ans.size())
	{
		cout<<ans[i]<<" ";
	}
	cout<<endl;
	FOR(i,ans1.size())
	{
		cout<<ans1[i]<<" ";
	}
	cout<<endl;
	cout<<endl;
	cout<<min(ans[k-1],ans1[k-1])<<endl;
	return 0;
}
