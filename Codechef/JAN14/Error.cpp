#include <cassert> 
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
#include <stdint.h>
#include <queue>
#include <iomanip>
#include <utility>
#include <locale>
#include <sstream>
#include <string> // this should be already included in <sstream>
#define FOR(i,n) for(i=0;i<n;i++)
#define FORI(i,a,n) for(i=a;i<=(int)n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define ll long long int
#define mod 1000000007
#define MAX 1000000

using namespace std;

int T[MAX];

//source -wikipedia
void KMP_table(string W)
{
	int pos,cnd;
	pos=2;
	cnd=0;
	T[0]=-1;
	T[1]=0;
	while(pos<W.length())
	{
		if(W[pos-1]==W[cnd])
		{
			cnd=cnd+1;
			T[pos]=cnd;
			pos=pos+1;
		}
		else if(cnd>0)
		{
			cnd=T[cnd];
		}
		else
		{
			T[pos]=0;
			pos=pos+1;
		}
	}
}

int KMP(string s,string w,int m)
{
	int i;
	i=0;
	KMP_table(w);
	while(m+i<s.length())
	{
		if(w[i]==s[m+i])
		{
			if(i==w.length()-1) //here we have completed the pattern so return the starting index from where the pattern matches
			{
				return m;
			}
	      i++;
	    }
	    else
	    {
			m=m+i-T[i];
			if(T[i]>-1)
			{
				i=T[i];
			}
			else i=0;
		}
	}
	return s.length(); // no match we have reached till end;
}		
int main()
{
	string a;
	int t,f,s,l;
	bool flag=false;
	scanI(t);
	while(t--)
	{
	    cin>>a;
	    l=a.length();
	    //cout<<KMP(a,"010",0)<<" "<<KMP(a,"010",0)<<endl;
	    f=KMP(a,"010",0);
	    s=KMP(a,"101",0);
	    if(f<l||s<l)
	    {
			flag=true;
		}
		else flag=false;
		
		if(flag) puts("Good");
		else puts("Bad");
	  
    }
	return 0;
}
	


