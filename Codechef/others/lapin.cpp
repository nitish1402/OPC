#include<stdio.h>
#include<string.h>

int main()
{
  int t;
  char str[1003],str1[1000],str2[1000];
  int arr1[26],arr[26];
  int i,j,l,l1,l2,k,flag,count;
  scanf("%d",&t);
  while(t--)
  {
     count=0;
     for(i=0;i<26;i++){
          arr1[i]=0;
          arr[i]=0;
          //str1[i]='\0';
          //str2[i]='\0';
     }
    for(i=0;i<1000;i++){
         str1[i]='\0';
         str2[i]='\0';
    }
     scanf("%s",str);
     l=strlen(str);
     // for(i=0;i<l;i++) printf("%c",str[i]);
     for(i=0;i<l/2;i++)
     {
       str1[i]=str[i];
     }
     //for(i=0;i<l;i++) printf("%c",str[i]);
     if(l%2==0){
        k=0;
     for(j=l/2;j<l;j++)
     {

       str2[k]=str[j];
      k++;
     }
     }
     else if(l%2!=0){
     k=0;
     for(j=l/2+1;j<l;j++)
     {
       
       str2[k]=str[j];
      k++;
     }
   }
    //printf("%s %s\n",str1,str2);
    l1=strlen(str1);
    l2=strlen(str2);
    for(i=0;i<l1;i++)
     {
         switch(str1[i])
         {
           case 'a':arr[0]++;break;
           case 'b':arr[1]++;break;
           case 'c':arr[2]++;break;
           case 'd':arr[3]++;break;
           case 'e':arr[4]++;break;
           case 'f':arr[5]++;break;
           case 'g':arr[6]++;break;
           case 'h':arr[7]++;break;
           case 'i':arr[8]++;break;
           case 'j':arr[9]++;break;
           case 'k':arr[10]++;break;
           case 'l':arr[11]++;break;
           case 'm':arr[12]++;break;
           case 'n':arr[13]++;break;
           case 'o':arr[14]++;break;
           case 'p':arr[15]++;break;
           case 'q':arr[16]++;break;
           case 'r':arr[17]++;break;
           case 's':arr[18]++;break;
           case 't':arr[19]++;break;
           case 'u':arr[20]++;break;
           case 'v':arr[21]++;break;
           case 'w':arr[22]++;break;
           case 'x':arr[23]++;break;
           case 'y':arr[24]++;break;
           case 'z':arr[25]++;break;
          }
    }
    for(i=0;i<l2;i++)
     {
         switch(str2[i])
         {
           case 'a':arr1[0]++;break;
           case 'b':arr1[1]++;break;
           case 'c':arr1[2]++;break;
           case 'd':arr1[3]++;break;
           case 'e':arr1[4]++;break;
           case 'f':arr1[5]++;break;
           case 'g':arr1[6]++;break;
           case 'h':arr1[7]++;break;
           case 'i':arr1[8]++;break;
           case 'j':arr1[9]++;break;
           case 'k':arr1[10]++;break;
           case 'l':arr1[11]++;break;
           case 'm':arr1[12]++;break;
           case 'n':arr1[13]++;break;
           case 'o':arr1[14]++;break;
           case 'p':arr1[15]++;break;
           case 'q':arr1[16]++;break;
           case 'r':arr1[17]++;break;
           case 's':arr1[18]++;break;
           case 't':arr1[19]++;break;
           case 'u':arr1[20]++;break;
           case 'v':arr1[21]++;break;
           case 'w':arr1[22]++;break;
           case 'x':arr1[23]++;break;
           case 'y':arr1[24]++;break;
           case 'z':arr1[25]++;break;
          }
    }
    for(i=0;i<26;i++)
    {
         //printf("%d %d\n",arr[i],arr1[i]);
         if(arr[i]==arr1[i]) count++;
    }
   if(count==26) printf("YES\n");
   else if(count!=26)  printf("NO\n");
   }
  return 0;
}    

