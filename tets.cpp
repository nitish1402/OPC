#include <cstdio>
 #include <cstdlib> 
 #include<string.h> 
 #include<algorithm>
 
 using namespace std;
 int main() 
 { 
    int i,t,c[125],d[125],
    counter=0,len_a,len_b; 
    char a[10003],b[10003];
     scanf("%d",&t); 
     while(t--) 
     { len_a=len_b=0; 
     for(i=0;i<125;i++) 
     { c[i]=d[i]=0; }
      scanf("%s",a);
       scanf("%s",b);
        len_a=strlen(a); 
        len_b=strlen(b); 
        for(i=0;i<len_a;i++) 
        { 
        c[(int)a[i]]++;
         } 
         for(i=0;i<len_b;i++) 
         { 
         d[(int)b[i]]++; }
          counter=0; 
          for(i=0;i<125;i++) 
          { 
              counter+=min(c[i],d[i]);
           } printf("%d\n",counter); } return 0; }
