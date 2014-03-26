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

const int num=127587253;
using namespace std;

double num1=5;
const double& cr=1;
double &peek=num1;
int main()
{
	int i=num;
	cout<<&i<<endl;
	int& r =i;
	r++;
	int *poin=&r;
	cout<<r<<" "<<i<<" "<<&r<<" "<<&i<<" "<<*poin<<endl;
	
	if(poin)  cout<<"nitish is the best"<<endl;
	
	if(poin!=0)  cout<<"Fuck her fat ass"<<endl;
	
	for(i=0;i<6;i++)
	{
		if(i==5) goto nitish;
	}
	
	nitish : cout<<"nitish is here"<<endl;
	
	char str[18]={"???ooopll>??"};
	
	int l=strlen(str);
	
	char *p=str;
	
	i=0;
	int count=0;
	while(*p++)
	{
		if(*p=='?')
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
