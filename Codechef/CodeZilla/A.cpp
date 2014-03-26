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

int min_width(const string& x, const set<char>& y) {
  int ret = x.size();
  map<char, int> index;
  set<int> index_set;

  for (int j = 0; j < x.size(); j++) {
    if (y.count(x[j]) > 0) {
      if (index.count(x[j]) > 0)
        index_set.erase(index[x[j]]);
      index_set.insert(j);
      index[x[j]] = j;
      if (index.size() == y.size()) {
        int i = *index_set.begin();
        if (ret > j-i+1)
          ret = j-i+1;
      }
    }
  }
  return ret;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		set<char> z;
		cin>>s;
		z.insert('R');
		z.insert('G');
		z.insert('B');
		cout<<min_width(s,z)<<endl;
		
	}
		
	return 0;
}
