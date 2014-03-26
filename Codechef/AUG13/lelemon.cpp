#include<iostream>
#include<algorithm>
#include<stdio.h>
#define ll long long
#include<malloc.h>
#define sc1(n) scanf("%d",&n)
#define sc(n,m) scanf("%d%d",&n,&m)
#define pr(n) printf("%d\n",n)
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

using namespace std;
int main()
{
    int t,n,m,i,j,c,val,sum;
    int p[101];
    int A[10009];
    t=scan();
    while(t--)
    {
       sum=0;
       for(i=0;i<101;i++) p[i]=0;
       sc(n,m);
       for(i=0;i<m;i++)
       {
          val=scan();
          p[val]++;           
       }

       int k,l,count=0;
       for(i=0;i<n;i++)
       {
          c=scan();
          for(j=0;j<c;j++)
          {
                sc1(A[j]);
          }
          //cout<<c<<endl;
          sort(A,A+c);
          l=c-1;
          k=count;
          while(p[k]>0)
          {
            if(l<0) break;
            //cout<<l<<" "<<A[l]<<endl;
            sum+=A[l];
            
            p[k]--;l--;
          }
          count++;
         for(int p=0;p<10009;p++) A[p]=0;
       }
       printf("%d\n",sum);
  
     }
    return 0;
}

