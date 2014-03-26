#include<iostream>
#include<stdio.h>
 
int main()
{int t,n,m,k,x;
 
 scanf("%d",&t);
 
 while(t--)
 {scanf("%d %d %d",&n,&m,&k);
    
  if((n==1 && m==2) || (n==2 && m==1))
  printf("0\n");
  else
  {if(n==1 || m==1)
   printf("%d\n",k);
   else
   {int x=k/2;
   if(k%2==0)
   printf("%d\n",x);
   else
   printf("%d\n",x+1);}}
 } 
 return 0;}
