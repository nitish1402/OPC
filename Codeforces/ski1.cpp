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

int b_search(const int A[],int b,int e,int num)
{
	int count=0; //return if not found;
	int r=e-1;
	while(1)
	{
		if(b>=e)  break;  
		//cout<<b<<" "<<e<<endl; 
		if(A[b]+A[e]<num)
		  b++;
		else if(A[b]+A[e]==num)
		  b++,e--,count++;
		else
		  e--;
		 
		
		  
	}
	return count;
		
}
	
int main()
{
	int n,q;
	int i,j;
	cin>>n>>q;
	int A[1000002];
	FOR(i,n)
	{
		cin>>A[i];
	}
	sort(A,A+n);
	//int *pos=A;
	int rq=0;
	int l,pos;
	int count=0;
	count=b_search(A,0,n-1,q); //found index here
		
		
	cout<<count<<endl;
	//l=find(A,A+n,3);
	
	return 0;
}
