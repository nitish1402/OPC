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

int a[1000001]={0},b[1000001]={0},c[1000001]={0};
	int main(){

 
int i,j,n,k;
scanf("%d",&n);
for(i=1;i<=n;i++){
scanf("%d",&a[i]);
}
//j=max(a,n);
for(i=0;i<n;i++){
c[i]=0;
}
for(k=1;k<=n;k++){
c[a[k]]=c[a[k]]+1;
}
for(i=1;i<=n;i++){
c[i]=c[i]+c[i-1];
}
for(k=n;k>0;k--){
b[c[a[k]]]=a[k];
c[a[k]]=c[a[k]]-1;
}
for(i=1;i<=n;i++){
printf("%d\n",b[i]);
}
return 0;
}
	
