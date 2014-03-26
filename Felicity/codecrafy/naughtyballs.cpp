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

bool arr[100003]={false};
bool arr1[100003]={false};
int main()
{
     int n,i,j,k;
     int ans1=100000,ans2=100000;
     int A[100003],B[100003];
     map<int,int> CA;
     map<int,int> CB;
     map<int,int>:: iterator it;
     cin>>n;
     bool flag1=true,flag2=true;;
     FOR(i,n)
     {
        cin>>A[i]>>B[i];
        CA[A[i]]++;
        CB[B[i]]++;
     }
     //sort(CA,CA+CA.size());
     //sort(CB,CB+CB.size());
     int l,m;
     //l=CA[MAX-1];
     //m=CB[MAX-1];
     int max1=0,mx1=0,max2=0,mx2=0;
     for(it=CA.begin();it!=CA.end();++it)
     {
		 if(it->second>mx1)
		 {
			 mx1=it->second;
			 max1=it->first;
		 }
	 }
	 for(it=CB.begin();it!=CB.end();++it)
     {
		  if(it->second>mx2)
		 {
			 mx2=it->second;
			 max2=it->first;
		 }
	 }
	 int count=0;
	 //cout<<max1<<endl;
	 FOR(i,n)
	 {
		 if(A[i]==max1)
		 {
			 arr[i]=true;
			 count++;
		 }
	 }
	 int count2=0;
	 FOR(i,n)
	 {
		 if(B[i]==max1&&(!arr[i]))
		 {
			 count2++;
		 }
	 }
	 //count2 wiil give no. of moves
	 int lim=ceil(n/2.0);
	 //cout<<lim<<endl;
	 if(count>=lim)
	 {
		 ans1=0;
		 cout<<ans1<<endl;
		 return 0;

 }
    
	 else 
	 {
		 int diff=lim-count;
	//	 cout<<diff<<" "<<count2<<endl;
		 if(count2>=diff)
		 {
			 ans1=diff;
		 }
		 else
		 {
			 flag1=false;
		 }
		 int c1=0,c2=0,d1;
		 //2nd way
		 FOR(i,n)
		 {
			 if(A[i]==max2)
			 {
				 c1++;
				 arr1[i]=true;
			 }
		 }
		 FOR(i,n)
		 {
			 if(B[i]==max2 &&(!arr1[i]))
			 {
				 c2++;
			 }
		 }
		 
		 //c2 value in b
		 //c1 particular in a
		 // we want limit/2
		 d1=lim-c1;
		 //cout<<c1<<" ++"<<d1<<endl;
		 if(c2>=d1)
		 {
			 ans2=d1;
		 }
		 else flag2=false;
     
         if(flag1==false && flag2==false)
         {
			 cout<<"Impossible"<<endl;
		 }
		 else cout<<min(ans1,ans2)<<endl;
	 }
     return 0;
}
