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
int graph[128][128];
int n;
int dist[128];

struct liDist {
	bool operator()(int u,int v) const {
		return make_pair(dist[u],u) <make_pair(dist[v],v);
	}
}

void dijekstra(int s)
{
	for(int i=0;i<n;i++)
	{
		dist[i]=MAX;
	}
	dist[s]=0;
    set <int ,liDist> q;
    q.insert(s);
    while(!q.empty())
    {
		int u=*q.begin();
		q.erase(q.begin());
		for(int v=0;v<n;v++)
		{
			if(graph[u][v]!=-1)
			{
				int newDist=dist[u]+graph[u][v];
				if(newDist<dist[v])
				{
					if(q.count(v)) q.erase(v);
					dist[v]=newDist;
					q.insert(v);
				}
			}
         }
    }
}
