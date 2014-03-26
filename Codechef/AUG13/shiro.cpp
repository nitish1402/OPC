//trolled 57 times gooooooooooooooooz
#include<iostream>
#include<stdio.h>
#include<cmath>
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
float dp[10011][101];
int main()
{
   //double dp[10000][105];
   int flag[101];
   float prob[101],ans;
   int flag_sum,t,n,i,j,princess_factor;
   t=scan();
   while(t--)
   {
      n=scan();
      flag_sum=0;
      ans=0.0;
      prob[0]=flag[0]=0;
      //scanning flags at level i
      for(i=1;i<=n;i++)
      {
         flag[i]=scan();
         flag_sum+=flag[i];
      }
      //scanning respective probabilities of abra flags
      //double pick;
      for(i=1;i<=n;i++)
      {
         scanf("%f",&prob[i]);
         prob[i]/=100;
      }
      for(i=0;i<=flag_sum;i++){
           dp[i][0]=0;
           dp[i][1]=0;
      }
      //saving the princess d
      dp[0][1]=1-prob[1];
      dp[flag[1]][1]=prob[1];
      for(j=2;j<=n;j++)
      {
            for(i=0;i<=flag_sum;i++){
               if(i<flag[j])
                dp[i][j]=dp[i][j-1]*(1-prob[j]);
               else{
                    dp[i][j]=dp[i][j-1]*(1-prob[j]) + dp[i-flag[j]][j-1]*prob[j];
                  }
             }

      }
      princess_factor=(flag_sum+1)/2;
      for(i=princess_factor;i<=flag_sum;i++)
          ans+=dp[i][n];
      printf("%f\n",ans);
    }
    return 0;
}


