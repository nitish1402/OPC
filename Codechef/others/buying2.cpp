#include<stdio.h>
int main(){
    int i,t,c,n,x,k,sum,val;
    scanf("%d",&t);
    while(t--){
      scanf("%d %d",&n,&x);
      int a[n];
      sum=0;
      for(i=0;i<n;i++){
         scanf("%d",&a[i]);
         sum+=a[i];
      }
      c=0;
      k=sum/x;
      val=sum;
      for(i=0;i<n;i++){
        if(((val-a[i])/x)==k)  c=1;
      }     
      if(c==1)  printf("-1\n");
      else printf("%d\n",k);
    }
    return 0;
}
      

