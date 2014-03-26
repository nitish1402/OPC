#include<stdio.h>
void fun(int,int,int);
int maze[10][10],stat[10][10]={{0},{0}};
int tot=0;
 
int main()
{
int i,j,n;
 
scanf("%d",&n);
 
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
 
scanf("%d",&maze[i][j]);
}
 
if(maze[0][0]==0)
fun(0,0,n);
 
printf("%d\n",tot);
 
return 0;
}
 
void fun(int i,int j,int n)
{
 
 
if(i==n-1 && j==n-1)
tot++;
 
 
 
else if(stat[i][j]==0)
{
stat[i][j]=1;
if(i+1<n && maze[i+1][j]==0)
fun(i+1,j,n);
if(i-1>=0 && maze[i-1][j]==0)
fun(i-1,j,n);
 
if(j+1<n && maze[i][j+1]==0)
fun(i,j+1,n);
if(j-1>=0 && maze[i][j-1]==0)
fun(i,j-1,n);
 
stat[i][j]=0;
}
 
}

