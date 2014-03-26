#include<stdio.h>
int g[10000000];

int main()
{
    int t,n,i;
    g[1] = 1;
//    ig[1] = 1;
    for ( i = 2; i < 10000000; ++i) {
        g[i] = 1 + g[i - g[g[i - 1]]];
        
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",g[n]);
    }
    return 0;
}

