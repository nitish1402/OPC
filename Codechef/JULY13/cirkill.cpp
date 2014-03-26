#include<stdio.h>
#include<math.h>

typedef long long int L;
typedef long double LD;

//Determinant

int Determinant(int x1,int x2,int x3,int y1,int y2,int y3)
{
  int d=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
  return d;
}

LD H,K;//center coordinates

//radius
LD Radius(LD x,LD y)
{
  LD r=(x-H)*(x-H)+(y-K)*(y-K);
  return r;
}

//center
void computeCenter(int x1,int x2,int x3,int y1,int y2,int y3,int D)
{
  H=Determinant((x1*x1+y1*y1),(x2*x2+y2*y2),(x3*x3+y3*y3),y1,y2,y3)*1.0;
  H=(H/(2*D));
  K=Determinant(x1,x2,x3,(x1*x1+y1*y1),(x2*x2+y2*y2),(x3*x3+y3*y3))*1.0;
  K=(K/(2*D));
}

// nCr
L calc(int n, int r)
{
   if(r > n / 2)
    r = n - r;
    L ans = 1;
   int i;
   for(i = 1; i <= r; i++)
   {
    ans *= n - r + i;
    ans /= i;
   }
   return ans;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
      int n,x[32],y[32];
      scanf("%d",&n);
      L denominator;
      int i,j,k,l,numerator=0;
      LD result;
      denominator=calc(n,3)*(n-3);
      for(i=0;i<n;i++)
        scanf("%d%d",&x[i],&y[i]);
      for(i=0;i<n-2;i++)
      {
       for(j=i+1;j<n-1;j++)
       {
         for(k=j+1;k<n;k++)
         {
          int D=Determinant(x[i],x[j],x[k],y[i],y[j],y[k]);
           if(D)
            {
              computeCenter(x[i],x[j],x[k],y[i],y[j],y[k],D);
              LD R=Radius(x[i]*1.0,y[i]*1.0);
              for(l=0;l<n;l++)
              {
                 if((l!=i&&l!=j&&l!=k)&&(Radius(x[l]*1.0,y[l]*1.0)-R)<=0.000006)
                 numerator++;
              }
            }
         }
      }
    }
    result=numerator*1.0/denominator;
    printf("%Lf\n",result);
    }
    return 0;
  } 

