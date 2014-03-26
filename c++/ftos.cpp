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

int main()
{
	float num;
	cin>>num;
	float num1=num;
	int m=floor(log10(num));  //magnitude of number
	cout<<m<<endl;
	
	string s="\0";  //string that is needed for conversion
	
	float precision =.00001;
	int digit;
	
	while((num>0+precision )|| m>=0)  //case like 230.0
	{
		float weight=pow(10,m);
		digit=floor(num/weight);
		num=num-(digit*weight);
		s+=('0'+digit);
		if(m==0)
		   s=s+'.';
		m--;
	}
	string s1;
	//s1=" "+num1;
	cout<<s<<endl;
	//cout<<s1<<endl;   
	return 0;
}
