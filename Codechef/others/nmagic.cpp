#include<stdio.h>
#include<string.h>
int main(){
      char s[151];
      int i,l,t,flag;
      scanf("%d",&t);
      while(t--)
	{
          scanf("%s",s);
          l=strlen(s);
		flag=0;
		for(i=l-1;i>=0;i--)
		{
		  if(s[i]=='7')
		  {
		    s[i]='4';
		  }
		else
	{
	s[i]='7';
	flag=1;
        break;
	}
                }
		  
		if(flag==1)
		  printf("%s\n",s);
              else   printf("4%s\n",s); 
                 }
                      
                 
              
    
   return 0;
}
            

      

