#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
   char *str;
   str=(char*) malloc(sizeof(char)*100004);
   gets(str);

   
   int i;
   for(i=0;i<strlen(str);i++)
   {
      if(str[i]=='B')
      {
         printf("YES\n");
      }
   }
   
   return 0;
   }
         
