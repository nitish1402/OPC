#include <cctype>
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
#define FOR(i,n) for(i=0;i<(int)n;i++)
#define FORI(i,a,n) for(i=a;i<=(int)n;i++)
#define FORC(it,C) for(it=C.begin();it!=C.end();it++)
#define scanI(x) scanf("%d",&x)
#define scanD(x) scanf("%lf",&x)
#define print(x) printf("%d\n",x)
#define mod 1000000007
#define ll unsigned long long
///cout<<(double)(clock() - tStart)/CLOCKS_PER_SEC<<endl;
///clock_t tStart = clock();

typedef struct rank
{
	char c;
	int r;
	int pos;
}rank;

struct state {
    int x, y;
    state(){}
    state(int a, int b) {
    x = a;
    y = b;
    }
};

  bool operator<(state a, state b) {
    if(a.x == b.x) return a.y <b.y;
    return a.x < b.x;
    }
    
bool sort1(struct rank a,struct rank b)
{
   if(a.r > b.r ) return true;
   else if(a.r==b.r) return a.pos>b.pos;
   return false;
}

using namespace std;

char s[150001];
char fre[100];
char prior[200];//rank
int rec[200]={0};
	
int main()
{
	
    int t,i,l;
    scanI(t);
    while(t--)
    {
		FOR(i,500)
		{
			fre[i]='\0';
			prior[i]='\0';
			rec[i]=0;
		}
		scanf("%s",fre);
		getchar();
		gets(s);
		int len=strlen(s);
		vector<state> P;
		FOR(i,len)
		{
			if(s[i]>='A'&&s[i]<='Z')
			 rec[tolower(s[i])]++;
			else
			 rec[tolower(s[i])]++;
		}
		FORI(i,'a','z')
		{
			P.push_back(state(rec[i],i));
		}
		sort(P.begin(),P.end());
		reverse(P.begin(),P.end());
		FOR(i,P.size())
		{
			prior[P[i].y]=i;
		}
		FOR(i,len) 
		{
         if(s[i] <='Z' && s[i] >='A')
         {
              s[i]= fre[25-prior[s[i]-'A'+'a']] -'a'+'A';
         } 
         else if(s[i] <='z' && s[i] >='a')
         {
              s[i] =fre[25-prior[s[i]]];
         }
        
        }
       printf("%s\n",s);
     }

}


