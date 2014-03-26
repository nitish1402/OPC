#include<stdio.h>

int gcd(int a,int b)
{
   if(a%b==0)  return b;
   else return gcd(b,a%b);
}


int main()
{
   int i,j,n,t,a,res;
   int A[1006];
   scanf("%d",&t);
   while(t--){
        scanf("%d",&n);
        scanf("%d",&a);
        res=a;
        for(j=2;j<=n;j++)
        {
          scanf("%d",&a);
          res=gcd(a,res);
        }
        /*for(j=2;j*j<=res;j++)
        {
          if(res%j==0)
          {
             res=res/(res/j);
             break;
          }
        }
        if(res==1)  printf("-1\n");
        else*/ printf("%d\n",res);
   }
   return 0;
}


