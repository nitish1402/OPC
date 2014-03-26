#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
#include <algorithm>
#include <vector>
#include <cstring>
#include <stack>
#include <cctype>
#include <utility>   
#include <map>
#include <string>  
#include <climits> 
#include <set>
#include <string>    
#include <sstream>
#include <utility>   
#include <ctime>
#include <cassert>
#include <fstream>
using namespace std;
typedef long long LL;
typedef vector<int> VI;
typedef pair<int, int> II;
typedef vector<long long> VLL;
typedef vector<bool> VB;
#define SZ(A) ((int)A.size())
#define LEN(A) ((int)A.length())
#define MS(A) memset(A, 0, sizeof(A))
#define MSV(A,a) memset(A, a, sizeof(A))
#define MAX(a,b) ((a >= b) ? (a) : (b))
#define MIN(a,b) ((a >= b) ? (b) : (a))
#define ABS(a) (((a) > 0) ? (a) : (-a))
#define MP make_pair
#define X first
#define Y second
#define PB push_back
#define FOUND(A, x) (A.find(x) != A.end())
#define getcx getchar_unlocked
#define INF (int(1e9))
#define INFL (LL(1e18))
#define EPS 1e-12
#define chkbit(s, b) (s & (1<<b))
#define setbit(s, b) (s |= (1<<b))
#define clrbit(s, b) (s &= ~(1<<b))
#define REP(i, n) for(int i = 0; i < (n); i++)
#define FOR(i, a, n) for(int i = a; i < n; i++)
#define REV(i, a, n) for(int i = a; i > n; i--)
#define FORALL(itr, c) for(itr = (c).begin(); itr != (c).end(); itr++)
#define ALL(A) A.begin(), A.end()
#define LLA(A) A.rbegin(), A.rend()
//int dx[] = {-1, 0, 1, 0}, dy[] = {0, 1, 0, -1};
//int dx[] = {1, 1, 1, 0, 0, -1, -1, -1}, dy[] = {1, 0, -1, 1, -1, 1, 0, -1};
inline void inp( int &n ) {
        n=0; int ch = getcx(); int sign = 1;
        while(ch < '0' || ch > '9') { if(ch == '-') sign=-1; ch = getcx(); }
        while(ch >= '0' && ch <= '9') { n = (n << 3) + (n << 1) + ch - '0', ch = getcx(); }
		n = n * sign;
}
const int mod = int(1e9) + 9;
const int SZ = 2;
int base[SZ][SZ] = {{18, (-80 + mod) % mod}, {1, 0}};
int res[SZ][SZ];
void mul(int A[SZ][SZ], int B[SZ][SZ]){
	int C[SZ][SZ];
	MS(C);
	REP(i, SZ){
		REP(j, SZ){
			REP(k, SZ){
				C[i][j] = (C[i][j] + LL(A[i][k]) * B[k][j]) % mod;
			}
		}
	}
	memcpy(A, C, SZ*SZ*4);
}
void exponentiate(LL n){
	if(n == 1) return;
	exponentiate(n/2);
	mul(res, res);
	if(n&1) mul(res, base);
}
int solve(LL n){
	if(n == 1){
		return 1;
	}else if(n == 2){
		return 18;
	}
	memcpy(res, base, sizeof(res));
	exponentiate(n - 2);
//	REP(i, SZ){
//		REP(j, SZ)cout << res[i][j] << " " ;
//		cout << endl;
//	}
	LL ans = (LL(res[0][0]) * 18 + res[0][1] + mod) % mod;
	return ans;
}
int main() {
	std::ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--){
		LL n;
		cin >> n;
		cout << solve(n) << endl;
	}
	return 0;
}
