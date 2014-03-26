#include<stdio.h>

int main()
{
   double prob,prof,prob1,prof1,i,value,value1,ans;
   int t;
   int max;
   scanf("%d",&t);
   while(t--)
   {
     scanf("%lf",&prob);
     if(prob==0.0) printf("10000\n");
     else {
     i=1;
     prof=(double)2*(1-prob)*i;
     prof1=(double)2*prob*i;
     value=prob*prof-(1-prob)*1;
     value1=(1-prob)*prof1-prob*1;
     value1*=10000;
     value1+=10000;
     value*=10000;
     value+=10000;
     if(value1>value) ans=value1;
     else ans=value;
     printf("%lf\n",ans);
   }
  }
   return 0;
}

