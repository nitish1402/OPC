/*  a programm for implementing graph
 * using linked_list
 *@author:nitish bhagat
 */

#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#define ll long long
#define MAXV 100008 /*MAX. NUMBER OF VERTICES*/

bool processed[MAXV+1];
bool discovered[MAXV+1];
int parent[MAXV+1];
using namespace std;

typedef struct edgenode{
    int y;       /*adjecency info*/
      /*edge weight ,if any*/
    struct edgenode *next;  /*next node in the list*/
}edgenode;

typedef struct{
    edgenode *edges [MAXV+1]; /*adjecency info*/
     /*outdegree of each vertex*/
    int nvertices;     /*no. of the vertices in the graph*/
    int nedges;       /*no. of edges in the graph*/
    bool directed;   /*is the graph directed*/
}graph;

void initialize_graph(graph *g,bool directed)
{
   int i;   /*counter*/
   g->nvertices=0;
   g->nedges=0;
   g->directed=true;

   for(i=1;i<=MAXV;i++)
      //g->degree[i]=0;
   for(i=1;i<=MAXV;i++)
      g->edges[i]=NULL;
}

void insert_edge(graph *g,int x,int y,bool directed)
{
    edgenode *p;   /*temprory pointer*/
    
    p=(edgenode*)malloc(sizeof(edgenode));  /*allocating edgenode storage*/

    
    p->y=y;
    p->next=g->edges[x];
    
    g->edges[x]=p;  /*insert @ head of the list*/
   
 
    if(directed==false)
         insert_edge(g,y,x,true);
    else g->nedges++;
}

void read_graph(graph *g,bool directed)
{
  int i;     /*counter*/
  int m;     /*no. of edges*/
  int x,y;   /*vertices in edge (x,y)*/

  initialize_graph(g,directed);

 // printf("give me no. of vertices and no. of edges:");
  scanf("%d %d",&(g->nvertices),&m);

  for(i=1;i<=m;i++)
  {
     //   printf("enter x and y:");
        scanf("%d %d",&x,&y);
        insert_edge(g,x,y,false);/*if graph is undirected change it to false*/
  }
}

void initialize_search(graph *g)
{
  int i;/* counter */
  for (i=1; i<=g->nvertices; i++) {
       processed[i] = discovered[i] = false; 
       parent[i] = -1;
  }
}

void process_vertex_late(int v)
{
}
void process_vertex_early(int v)
{
  
}
void process_edge(int x, int y)
{

}

ll dfs(graph *g, int v,ll value)
{
    edgenode *p;/* temporary pointer */
    int y;/*successor vertex*/
    value=1;
    //if (finished) return;/* allow for search termination */
    discovered[v] = true;
    //time = time + 1;
    //entry_time[v] = time;
    process_vertex_early(v);
    p = g->edges[v];
    while (p != NULL) {
           y = p->y;
      if (discovered[y] == false) {
        parent[y] = v;
        process_edge(v,y);
        value+=dfs(g,y,value);
      }
      else if ((!processed[y]) || (g->directed))
           process_edge(v,y);
      //if (finished) return;
          p = p->next;
    }
     process_vertex_late(v);
     //time = time + 1;
    // exit_time[v] = time;
     processed[v] = true;
   return value;
}

int main()
{
   graph *g;
   int i,count,value,t;
   scanf("%d",&t);
   while(t--)
   {
     ll out=1;
     ll res[MAXV]={0};
     count=0;
     g=(graph*)malloc(sizeof(graph));
     bool directed;
     read_graph(g,directed);
     initialize_search(g);

     for (i=1; i<=g->nvertices; i++){
       if(!processed[i]){
        res[count]=dfs(g,i,value);
     
        count++;}
     }
     for(i=0;i<count;i++){
   //     printf("%d\n",out);
         out=(out%1000000007*res[i]%1000000007)%1000000007;
     } 
    printf("%d %lld\n",count,out);
  }
     return 0;
}                                                       

