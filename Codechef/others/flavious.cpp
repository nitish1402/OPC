#include<stdio.h>

int flavious(int n)
{
  int m,i;
  m=n*n;
  for(i=n-1;i>0;i--){
          m=(m-1)-(m-1)%i;
  }
  return m;
}

int main(){
  int t,n,l,i;
  scanf("%d",&t);
  while(t--){
     scanf("%d",&n);
     for(i=1;i<=n;i++){
     l=flavious(i);
     if(l>n) break;
     printf("%d ",l);}
    printf("\n");
  }
  return 0;
}

