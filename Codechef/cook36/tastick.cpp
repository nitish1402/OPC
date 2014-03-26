#include<stdio.h>
#include<algorithm>

using namespace std;

int scan()
{
int t=0;
char c;
c=getchar_unlocked();
while(c<'0' || c>'9')
c=getchar_unlocked();
while(c>='0' && c<='9')
{
t=(t<<3)+(t<<1)+c-'0';
c=getchar_unlocked();
}
return t;
}   

int main()
{   
    int i,k,n,out=0;
    int A[100009];
    n=scan();
    k=scan();
    for(i=0;i<n;i++)
     A[i]=scan();
    sort(A,A+n);
    
    for(i=0;i<n-1;i++)
    {
         if(A[i+1]-A[i]<=k)
             {out++,
              i++;
             }
    }
    printf("%d\n",out);
    return 0;
    
}
 

