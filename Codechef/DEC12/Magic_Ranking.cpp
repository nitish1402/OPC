#include<stdio.h>
double max(double a,double b)
{
   if(a>b)  return a;
   else return b;
}
int main()
{
   double a[110][110],an[110];
   int i,j,t,n;
   double ans;
   for(i=0;i<110;i++)
     {
      for(j=0;j<110;j++)  {a[i][j]=-300000.000000;}
     }
   an[1]=-1;
   for(i=2;i<110;i++){
      an[i]=an[i-1]+2;
   }
   scanf("%d",&t);
   while(t--)
   {
          
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
       for(j=1;j<=n;j++)
       {
            scanf("%lf",&a[i][j]);
       }
     }
     for(i=1;i<=n;i++)
     {
       if(i==1){
          for(j=2;j<=n;j++)
          {
            a[i][j]=max(a[i-1][j],a[i][j-1])+a[i][j];
          }
       }
       else {
           for(j=1;j<=n;j++)
          {
            a[i][j]=max(a[i-1][j],a[i][j-1])+a[i][j];
          }
       }
     }
    ans=a[n][n]/an[n];
    if(ans<0)  printf("Bad Judges\n");
    else printf("%lf\n",ans);
   }
   return 0;
}

