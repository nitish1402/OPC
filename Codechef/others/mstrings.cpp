#include<stdio.h>
#include<string.h>

int main()
{
   int t,i,l,k,j,count;
   char str[11];
   scanf("%d",&t);
   while(t--){
        count=0;
        scanf("%s",str);
        l=strlen(str);
        k=l-1;
        for(i=0;i<=l/2;i++){
             if(str[i]==str[k]){
                    k--;
                    count++;
              }
        }
        if(count==l/2+1)  printf("YES\n");
        else printf("NO\n");
   }
   return 0;
}
         

