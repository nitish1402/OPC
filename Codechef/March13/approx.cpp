#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
  // double d=(double) 103993/(double)33102;
   int a=103993;
   int b=33102;
   int k,l,i,j,A[1000007];
   int t;
   A[0]=a/b;
   l=a-A[0]*b;
   for(i=1;i<=1000007;i++)
   {
       A[i]=(l)*10/b;
      // printf("%d\n",A[i]);
       l=l*10;
       l=(l-A[i]*b);
       //printf("%d\n",A[i]); 
  }
  scanf("%d",&t);
  while(t--)
  {
      scanf("%d",&k);
      if(k==0)  printf("3");
      else{
      printf("3.");
      for(i=1;i<=k;i++) printf("%d",A[i]);}
      printf("\n");
  }
  return 0;
}
       
 


