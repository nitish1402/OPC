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
#define mod 1000000007
#define ll unsigned long long int
#define MAX 1050000
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();
 
using namespace std;
 
int main()
{
int flag=0;
// int data;
int f=0;
int next;
int n=0;
int i,j,k;
while(scanf("%d%d%d",&i,&j,&k))
{
flag=f=0;
if(i==0&&j==0&&k==0) break;
if(2*j==i+k)
{
flag=1;
next=j+k-i;
}
else {
f=1;
n=k*(j/i);
}
if(flag==1) printf("AP %d\n",next);
else if(f==1) printf("GP %d\n",n);
}
return 0;
}

