#include <stdio.h>

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
    double dp[300000];
    double rem[300000];
    double prob;
    int i,t,n;
    dp[1]=0.45;
    rem[1]=dp[1];
    for(i = 2; i <= 100000; i ++)
    {
       prob=dp[i-1];
       dp[i] = prob*0.55 + (1-prob)*0.45;//expectation formula 
       rem[i] = dp[i] + rem[i-1];
    }
    t=scan();
    while(t--)
    {
        n=scan();
        printf("%lf\n",rem[n]);
    }
    return 0;
}

