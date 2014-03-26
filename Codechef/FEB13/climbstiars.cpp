#include<stdio.h>
#define ll long long 

void matpower(long long M[2][2],int n){
       long long  w,x,y,z,a,b,c,d;
        long long  j=1000000007;

           if(n>1){
            matpower(M,n/2);
            w=((M[0][0]*M[0][0])%j+(M[0][1]*M[1][0])%j)%j;
            x=((M[0][0]*M[0][1])%j+(M[0][1]*M[1][1])%j)%j;
            y=((M[1][0]*M[0][0])%j+(M[1][1]*M[1][0])%j)%j;
            z=((M[1][0]*M[0][1])%j+(M[1][1]*M[1][1])%j)%j;
            M[0][0]=w;
            M[0][1]=x;
            M[1][0]=y;
            M[1][1]=z;

                  
       if(n%2!=0){
           a=((M[0][0]*1)%j+(M[0][1]*1)%j)%j;
           b=((M[0][0]*1)%j+(M[0][1]*0)%j)%j;
           c=((M[1][0]*1)%j+(M[1][1]*1)%j)%j;
           d=((M[1][0]*1)%j+(M[1][1]*0)%j)%j;
           M[0][0]=a;
           M[0][1]=b;
           M[1][0]=c;
           M[1][1]=d;
          }
      }
}

long long fib(long long M[2][2],int n){//function for computation
       if(n==1)  return 1;
       else if(n==2)  return 2;
       else {matpower(M,n-2);
       long long j=1000000007;
       return (((M[0][0]*2)%j+(M[0][1]*1)%j)%(j));}
}
ll fun(ll n)
{
   // printf("%lld\n",n);
    if(n==1)  return 1;
    else if(n==2)  return 1;
    else if(n%2==0) return fun(n/2);
    else if(n%2!=0) return fun(n-1)+1;
}

int main()
{
   ll n,m,g,ans;
   ll mod=1000000007;
   int i,j,t;
   scanf("%d",&t);
   while(t--){
        long long M[2][2]={{1,1},{1,0}};
        scanf("%lld %lld",&n,&g);
        m=fib(M,n);
        ans=fun(m);
     //   printf("%lld %lld \n",ans,m);
        if(ans==g) printf("CORRECT\n");
        else printf("INCORRECT\n");
   }
   return 0;
}

