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

///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

using namespace std;

void paren(int l,int r,char str[],int count)
{
	if(l<0 || r<0)  return;
	if(l==0 && r==0)
	{
		cout<<str<<endl;
	}
	else
	{
		if(l>0)
		{
			//cout<<"hi"<<endl;
			str[count]='(';
			paren(l-1,r+1,str,count+1);
		}
		if(r>0)
		{
			str[count]=')';
			paren(l,r-1,str,count+1);
		}
	}
}


int main()
{
	int n;
	cin>>n;
	char str[100]={'\0'};
	paren(n,0,str,0);
//	cout<<str<<endl;
	return 0;
}
