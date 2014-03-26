#include<stdio.h>
int main()
{
    int i,q,n,t,g,out;
    scanf("%d",&t);
    while(t--){
      scanf("%d",&g);
      while(g--){
        scanf("%d %d %d",&i,&n,&q);
        out=n/2;
        if(n%2==0){
           printf("%d\n",out);
        }
        else{
          if((i==1&&q==1)||(i==2&&q==2)){
             printf("%d\n",out);
          }
          if((i==1&&q==2)||(i==2&&q==1)){
             printf("%d\n",out+1);
          }
       }
     }
   }
   return 0;
}

