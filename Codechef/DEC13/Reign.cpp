    #include <stdio.h>
    #include <cstring>
    #include <complex>
    #include <vector>
    #include <cmath>
    #include <ctime>
    #include <iostream>
    #include <numeric>
    #include <algorithm>
    #include <map>
    #include <set>
    #include <stack>
    #include <stdint.h>
    #include <queue>
    #include <iomanip>
    #include <utility>
    #include <locale>
    #include <sstream>
    #include <string> // this should be already included in <sstream>
    #define FOR(i,n) for(i=0;i<(int)n;i++)
    #define FORI(i,a,n) for(i=a;i<=(int)n;i++)
    #define FORC(it,C) for(it=C.begin();it!=C.end();it++)
    #define scanI(x) scanf("%d",&x)
    #define scanD(x) scanf("%lf",&x)
    #define print(x) printf("%d\n",x)
    #define ll  long long int
    #define mod 1000000007
    #define MAX 100002
     
    using namespace std;
     
   inline ll scan1()
   {
    long long x;
    int c = getchar();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = getchar());
    if(c=='-') {neg=1;c=getchar();}
    for(;c>47 && c<58;c = getchar()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
    return x;
   }
    struct no {
    ll lsum, rsum, msum, sum;
    };
     
    no tree[ 4 * MAX + 1 ];
    ll sums[ MAX + 1 ], array[ MAX + 1 ];
     
    void init( int node, int i, int j ) {
    if ( i == j ) {
    tree[ node ] = ( ( no ) { array[ i ], array[ i ], array[ i ], array[ i ] } );
    }
    else {
    init( node * 2, i, ( i + j ) / 2 );
    init( node * 2 + 1, ( i + j ) / 2 + 1, j );
    no left = tree[ node * 2 ], right = tree[ node * 2 + 1 ];
    tree[ node ].lsum = max( left.lsum, left.sum + right.lsum );
    tree[ node ].rsum = max( right.rsum, right.sum + left.rsum );
    tree[ node ].msum = max( left.msum, max( right.msum, left.rsum + right.lsum ) );
    tree[ node ].sum = left.sum + right.sum;
    }
    }
     
     
    no query( int node, int a, int b, int i, int j ) {
    if ( i == a && j == b ) {
    return tree[ node ];
    }
    if ( j <= ( a + b ) / 2 ) {
    return query( node * 2, a, ( a + b ) / 2, i, j );
    }
    if ( i > ( a + b ) / 2 ) {
    return query( node * 2 + 1, ( a + b ) / 2 + 1, b, i, j );
    }
    no left = query( node * 2, a, ( a + b ) / 2, i, ( a + b ) / 2 );
    no right = query( node * 2 + 1, ( a + b ) / 2 + 1, b, ( a + b ) / 2 + 1, j );
    return ( ( no ) {
    max( left.lsum, left.sum + right.lsum ),
    max( right.rsum, right.sum + left.rsum ),
    max( left.msum, max( right.msum, right.lsum + left.rsum ) ),
    left.sum + right.sum } );
    }
     
    int main() {
    int t;
    int i, N, q, op, l, r;
    ll max1,max2;
    ll ans;
    scanI(t);
    while(t--)
    {
     N=scan1();
     q=scan1();
    FOR(i,N)
    {
      array[i]=scan1();
    }
    init( 1, 0, N - 1 );
    ans=-999999999999999ll;
    for(i=0;i<N-q-1;i++)
    {
		 
		max1=query( 1, 0, N - 1, 0, i ).msum ;
		max2=query( 1, 0, N - 1, q+i+1,N-1 ).msum ; 
        //A=largestSum(array,0,i);
        //B=largestSum(array,q+i+1,N);
    //    cout<<max1<<" "<<max2<<endl;
        if(max1+max2>ans)
        {
			ans=max1+max2;
		}
		
	  }  
     printf("%lld\n",ans);
    }
    return 0;
    }


