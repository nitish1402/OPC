#include<stdio.h>
int Partition(int A[],int p,int r){
  int x,i,j,temp,temp1;
  x=A[r];
  i=p-1;
  for(j=p;j<=r-1;j++){
       if(A[j]<=x){
          i=i+1;
          temp=A[i];
          A[i]=A[j];
          A[j]=temp;
       }
  }
  temp1=A[i+1];
  A[i+1]=A[r];
  A[r]=temp1;

  return i+1;
}

void QuickSort(int A[],int p,int r){
   int q;
  if(p<r){
       q=Partition(A,p,r);
       QuickSort(A,p,q-1);
       QuickSort(A,q+1,r);
  }
}

int fun(int a[],int n)
{
   int i,diff=0;
   diff=a[n]-a[0];
   for(i=0;i<n;i++) a[i]+=diff;
   return diff;
}
   
int main()
{
   int t,max,n,i,ans,min,max1;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d",&n);
      int a[n];
      ans=0;
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      QuickSort(a,0,n-1);
      ans=0;
      for(i=n-1;i>0;i--){
          ans+=fun(a,i);
      }
      printf("%d\n",ans);
    }
  return 0;
}

