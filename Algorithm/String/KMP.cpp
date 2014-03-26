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
