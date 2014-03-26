#include<stdio.h>

//int  M[2][2]={{1,1},{1,0}};//declaring multiplying matrix globally

void matpower(long long M[2][2],long long n){
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

long long fib(long long M[2][2],long long n){//function for computation
       if(n==1)  return 1;
       else if(n==2)  return 1;
       else {matpower(M,n-2);
       long long j=1000000007;
       return (((M[0][0]*1)%j+(M[0][1]*1)%j)%(j));}
}
int main(){
    int t;
    long long n;//declaring multiplying matrix globally
    long long r;
    scanf("%d",&t);
     while(t--){
         long long  M[2][2]={{1,1},{1,0}};
         r=0;
         scanf("%lld",&n);
         r=fib(M,n);
         printf("%lld\n",r);
    }
    
    
    return 0;
}

    

