#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define mod 1000000009
#define max 200000
#define clear(x) memset(x,0,sizeof(int)*max)
 
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
 
int A[max],sa[max],lcp[max],tmp[max],pos[max],Dif[max],gap;
 
bool sufCmp(const int &i, const int &j)
{
    return (pos[i]<pos[j]) || (pos[i]==pos[j] && pos[i+gap]<pos[j+gap]);
}
 
void buildSA(int Dif[],int n)
{
    int i=0;
    for(i=0;i<n;i++)
    {
        sa[i]=i;
        pos[i]=Dif[i];
    }
    gap=0;
    sort(sa,sa+n,sufCmp);    
    tmp[0]=0;
    
    for(gap=1;;gap*=2)
    {
        sort(sa,sa+n,sufCmp);
        for(i=1;i<n;i++)
         tmp[i]=tmp[i-1]+sufCmp(sa[i-1],sa[i]);
        for(i=0;i<n;i++)
         pos[sa[i]]=tmp[i];
        if(tmp[n-1]==n-1)
         break;
    }
}
 
void buildLCP(int n)
{
        int l=0,k,m,j,i;
        lcp[0]=0;
        for(j=0;j<n-1;j++)
        {
            k=pos[j];
            m=sa[k-1];
            while(Dif[j+l]==Dif[m+l])
            ++l;
            lcp[k]=l;
            if(l>0)
                --l;
        }
}
 
int main()
{
    int t,n,i,height;
    t=scan();
    while(t--)
    {
        clear(sa);
        clear(A);
        clear(Dif);
        clear(lcp);
        clear(pos);
        clear(tmp);
        height=0;
        n=scan();
        for(i=0;i<n;i++)
        {   
            scanf("%d",&A[i]);
            if(i!=0)
            Dif[i-1]=A[i]-A[i-1];
        }
        Dif[i-1]=-101;
        buildSA(Dif,n);
        buildLCP(n);
        for(i=1;i<n;i++)
        {
           height=(height+(n-1-sa[i])-lcp[i])%mod; 
        }
        printf("%d\n",height);
    }
    return 0;
}

