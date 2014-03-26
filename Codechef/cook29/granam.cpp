#include<stdio.h>
#include<string.h>

int main()
{
    char loc[42][10],on[42][3],pos[42][50];
    int i,j,t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=1;i<=n;i++){
           scanf("%s %s %[^\n]",loc[i],on[i],pos[i]);
        }
        printf("Begin on %s\n",pos[n]);
        for(i=n;i>1;i--){
          if(strcmp(loc[i],"Right")==0)   printf("Left on %s\n",pos[i-1]);
          else  printf("Right on %s\n",pos[i-1]);
       }
    }
  return 0;    
}

