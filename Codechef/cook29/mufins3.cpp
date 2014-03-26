#include<stdio.h>

int main()
{
   int t,n,i,j;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d",&n);
      if(n&2==0)  i=n/2;
      else i=n/2+1;
      printf("%d\n",i);
   }
   return 0;
}

