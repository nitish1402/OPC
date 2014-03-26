#include<stdio.h>
#include<string.h>

int main()
{
    int t,i,j;
    char str[27],str1[27];
    char s1[27]={"abcdefghijklmnopqrstuvwxyz_"};
    char s2[27]={"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    char ref[100][101];
    scanf("%d %s",&t,str);
    for(i=0;i<26;i++){
         str1[i]=str[i]^('a'^'A');

    }
    while(t--)
    {
       scanf("%s",ref[t]);
       for(i=0;i<strlen(ref[t]);i++)
       {
         for(j=0;j<27;j++){
          if(ref[t][i]==s1[j]){
             //  putchar(ref[t][i]);putchar(s1[j]);putchar('\n');
               ref[t][i]=str[j];
               break;
          }
          if(ref[t][i]==s2[j]){
               
               ref[t][i]=str1[j];
               break;
          }
         if(ref[t][i]=='_'){
              ref[t][i]=' ';
              break;
          }
         }
       }
       printf("%s\n",ref[t]);
       //putchar('\n');
   }
   return 0;
}

