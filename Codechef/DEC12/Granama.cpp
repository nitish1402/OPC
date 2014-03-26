#include<stdio.h>
#include<string.h>

void fun(char str[],int a[])
{
   int i;
   for(i=0;i<strlen(str);i++)
   {
     switch(str[i])
     {
       case 'a':a[0]++;break;
       case 'b':a[1]++;break;
       case 'c':a[2]++;break;
       case 'd':a[3]++;break;
       case 'e':a[4]++;break;
       case 'f':a[5]++;break;
       case 'g':a[6]++;break;
       case 'h':a[7]++;break;
       case 'i':a[8]++;break;
       case 'j':a[9]++;break;
       case 'k':a[10]++;break;
       case 'l':a[11]++;break;
       case 'm':a[12]++;break;
       case 'n':a[13]++;break;
       case 'o':a[14]++;break;
       case 'p':a[15]++;break;
       case 'q':a[16]++;break;
       case 'r':a[17]++;break;
       case 's':a[18]++;break;
       case 't':a[19]++;break;
       case 'u':a[20]++;break;
       case 'v':a[21]++;break;
       case 'w':a[22]++;break;
       case 'x':a[23]++;break;
       case 'y':a[24]++;break;
       case 'z':a[25]++;break;
     }
   }
}
       
int main()
{
    char r[1008],s[1008];
    int t,i,j,rc[26],sc[26];
    int count,flag;
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<26;i++)
        {
           rc[i]=0;
           sc[i]=0;
        }
        count=0;
        flag=0;
        scanf("%s %s",r,s);
        fun(r,rc);
        fun(s,sc);
        for(i=0;i<26;i++)
        {
             if(rc[i]==sc[i]) count++;
             if((rc[i]>sc[i])&&(rc[i]>0&&sc[i]==0))  flag=1;
              if((rc[i]<sc[i])&&(sc[i]>0&&rc[i]==0))  flag=1;
        }
        
     if(count==26||flag==1)  printf("YES\n");
     else printf("NO\n");
       
    }
    return 0;
}

