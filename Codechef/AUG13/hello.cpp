#include <stdio.h>
//#include <iostream>
//#include <algorithm>

//using namespace std;

int main()
{
   int t,u,n,m,c,id,i,div;
   double d,r;
   double best,temp;
   scanf("%d",&t);
   while(t--)
   {
      best=0;id=0;div=1;
      scanf("%lf%d%d",&d,&u,&n);
      best=u*d;
      //cout<<best<<endl;
      for( i=1;i<=n;i++)
      {
        scanf("%d%lf%d",&m,&r,&c);
        temp=(c+r*u*m);
        //cout<<temp<<endl;
        if(best/div*m>temp)
        {
            best=temp;
            id=i;
            div=m;
        } 
        else if(best/div*m==temp&&div<m)
        {
            best=temp;
            id=i;
            div=m;
        }
      }
      printf("%d\n",id);
    }
     return 0;
}
   

