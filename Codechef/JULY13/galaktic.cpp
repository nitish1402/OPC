#include <cstdio>
#include <vector>
using namespace std;

typedef vector<int> VI;

vector<int> a[100009];
int mark[100009]; // we mark visited vertexes here
int cnt; // contains the size of the current connected component
int cost[100009]={0};
int M;

int scan()
{
   int t=0;
   char c;
   c=getchar_unlocked();
   while(c<'0' || c>'9')
     c=getchar_unlocked();
     while(c>='0' && c<='9')
     {
        t=(t<<3)+(t<<1)+c-'0';
        c=getchar_unlocked();
     }
   return t;
}

// traverse the graph in depth first order
int DFS(int u) {
	if(cost[u]<M&&cost[u]!=-1)
         M=cost[u];
	 mark[u] = 1; // mark vertex as visited
	// loop over adjacent vertexes
	for (int v=0;v<a[u].size();v++) {
		// *v is the adjacent vertex itself
		if (!mark[a[u][v]]) {
			// if it was not visited before we move to it
			DFS(a[u][v]);
		}
	}
        return M;
}

int main() {
	int m,n,i;
	  n=scan();
          m=scan();
             // initializing graph
	   //  a = vector<VI> (m+1);
             for ( i = 0; i < m; ++i) {
			// input ends of the current edge
			int u, v;
			u=scan();
                        v=scan();
			// add v to the list of u, and u to the list of v
			a[u].push_back(v);
			a[v].push_back(u);
	     }	
        // printf("ok");	
	int t,min=20000,count=0,query,sum=0;
        for(i=1;i<=n;i++)
        {
          // printf("ok2");
           scanf("%d",&t);
           if(t<0) cost[i]=-1;
           else cost[i]=t;
        }
       // printf("ok1");	
	for(i=1;i<=n;i++)
        {
          // printf("ok");
           if(!mark[i])
           {
              count++;
              M=20000;
              query=DFS(i);
              if(query==20000)
              {
                 sum=-1;
                 break;
              }
              sum+=query;
              if(query<min) min=query;
            }
        }
        if(sum!=-1&&count>2)
          sum+=(count-2)*min;
        else if(count==1) sum=0;
        printf("%d\n",sum);
        return 0;
}



