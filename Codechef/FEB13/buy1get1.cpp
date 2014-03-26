#include<stdio.h>
#include<string.h>

int main()
{
 
  int i,j,l,k,t;
  char str[52]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  char str1[202];
  scanf("%d",&t);
  while(t--)
  {
     int A[52]={0};
     scanf("%s",str1);
     l=strlen(str1);
     for(i=0;i<l;i++){
        for(j=0;j<52;j++){
          if(str1[i]==str[j])  A[j]++;
        }
     }
     for(i=0;i<52;i++){
        if(A[i]%2==0) A[i]/=2;
        else if(A[i]%2!=0) A[i]=A[i]/2+1;
     }
     k=0;
     for(i=0;i<52;i++) k+=A[i];
      printf("%d\n",k);
    }
    return 0;
}

