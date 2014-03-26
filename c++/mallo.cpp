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

int fun(int i);
int main()
{

int i=4;
char *cp;
const char *cpp;
int a=10,b=10;
int A[19]={1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,9,9,10,10};
int num=0;
FOR(i,19)
{
	num=num^A[i];
}
cout<<num<<endl;
cout<<(a^b)<<" "<<b<<endl;
//cp=cpp;
cpp=cp;
printf("%d\n",fun(i));
printf("%d",fun(fun(fun(fun( fun(i))))));
}
int fun(int i)
{
	 if(i%2) return (i+(7*4)-(5/2)+(2*2));   //it will be true when it is equal to 1
	 
else return (i+(17/5)-(34/15)+(5/2));
}
