#include<stdio.h>

unsigned long long  fun( unsigned long long a,unsigned long long b,unsigned long long c)
{
   unsigned long long j=1000000007,p,q;
   p=((a%j)*((b-1)%j))%j;
   q=(p*((c-2)%j))%j;
   return q%j;
}
int main()
{
   unsigned long long  i,res,j,k;
   int t;
   scanf("%d",&t);
   while(t--){
      scanf("%llu %llu %llu",&i,&j,&k);
     // printf("%llu\n",k);
      if(i<j){
          if(i<k){
            if(j<k){
              res=fun(i,j,k);
            }
            else {
              res=fun(i,k,j);
            }
         }
          else {
              res=fun(k,i,j); 
          }
      }
      else{
        if(j<k){
           if(i<k){
             res=fun(j,i,k);
           }
           else {
             res=fun(j,k,i);
           }
        }
        else{
            res=fun(k,j,i);
        }
     }   

       printf("%llu\n",res);
  }
  return 0;
}

