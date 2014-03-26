#include<stdio.h>
int main()
{
int t;
int t1,t2,t3,t4;
scanf("%d",&t);
while(t--)
{
scanf("%d%d%d%d",&t1,&t2,&t3,&t4);
 
double ans = (t1+0.0)/(t1+t2+0.0);
printf("%.6f\n",ans);
 
}
return 0;
} 

