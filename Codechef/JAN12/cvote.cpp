#include<stdio.h>
#include<string.h>
 
typedef struct st
{
char chef[20];
char country[20];
int countryScore;
int chefScore;
}st;


void quicksort(st *a,int p,int r)

{

if(p<r)

{

int q=partition(a,p,r);

quicksort(a,p,q-1);

quicksort(a,q+1,r);

}

else return;

}

int partition(st *a,int p,int r)

{

int i=p-1,j;

st temp;

for(j=p;j<r;j++)

{

if(strcmp(a[j].chef,a[r].chef)<=0)

{

i=i+1;

temp=a[i];

a[i]=a[j];

a[j]=temp;

}

}

temp=a[i+1];

a[i+1]=a[r];

a[r]=temp;

return i+1;

}  



int binsearch(st comp[], int max, char *value) {
int position;
int begin = 0;
int end = max-1 ;
int cond = 0;
 
while(begin <= end) {
position = (begin + end) / 2;
if((cond = strcmp(comp[position].chef, value)) == 0)
     return position;
else if(cond < 0)
begin = position + 1;
else
end = position - 1;
}
 
}
 
int main()
{
  int n,res,res1,i,j,m,t,in,max1,max2,max1in,max2in;
  scanf("%d %d",&n,&m);
  st comp[n];
  res=0;
  char email[m][12];
  for(i=0;i<n;i++){
    scanf("%s %s",comp[i].chef,comp[i].country);
    comp[i].chefScore=0;
    comp[i].countryScore=0;
  }
  quicksort(comp,0,n-1);//sorting structure for binary search
  in=0;
  /*for(i=0;i<n;i++){
   printf("%s",comp[i].chef);
}*/

  for(i=0;i<m;i++)
  {
      scanf("%s",email[i]);
  }
  for(i=0;i<m;i++){
     in=binsearch(comp,n,email[i]);
    if(strcmp(email[i],comp[in].chef)==0){//if found add 1 to score
       // printf(" %d %d\n",i,in);
        comp[in].chefScore++;
        comp[in].countryScore++;
    }
  }
//  QSortMain1(comp,n);

  int num=0;
  for(i=0;i<n;i++)//checking for same country
  {  
    //if(strcmp(comp[num=binsearch(comp,n,comp[i].country)].country,comp[i].country)==0){
     //if(num!=i){
     for(j=0;j<n&&j!=i;j++){
      if(strcmp(comp[j].country,comp[i].country)==0){
        comp[i].countryScore+=comp[j].countryScore;
      strcpy(comp[j].country,"123");
       comp[j].countryScore=0;
     }
    }
}

  
/*for(i=0;i<n;i++){
   printf("%s     %d --%s %d\n",comp[i].chef,comp[i].chefScore,comp[i].country,comp[i].countryScore);
}*/
          
  max1=-99;
  max2=-99;

 
for(i=0;i<n;i++){//getting maximum
   if(comp[i].chefScore>max1){
       max1=comp[i].chefScore;
       max1in=i;
   }
   if(comp[i].countryScore>max2){
       max2=comp[i].countryScore;
       max2in=i;
   }
}
for(i=0;i<n;i++){//checking for lexicographically smaller string
    if(comp[i].chefScore==max1){
       res=strcmp(comp[i].chef,comp[max1in].chef);
    if(res<=0) { 
       max1in=i;
       max1=comp[i].chefScore;}
    }
}
for(j=0;j<n;j++){
    if(comp[j].countryScore==max2){
       res1=strcmp(comp[j].country,comp[max2in].country);
    if(res1<=0){ max2in=j;
       max2=comp[j].countryScore;}
    }
}
 
printf("%s\n",comp[max2in].country);
printf("%s\n",comp[max1in].chef);

return 0;
 
}

