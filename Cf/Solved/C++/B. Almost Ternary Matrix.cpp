// https://codeforces.com/contest/1699/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int G[50][50];

int main(){_
	int t;cin >> t;
	while(t--){
		int n,m;cin >> n >> m;
		int a = 0;
		for(int i=0;i<n/2;++i){
			for(int j=i;j<m-i;++j){
				G[i][j] = a;
			}
			for(int j=i;j<n/2;++j){
				G[j][i] = a;
				G[j][m-i-1] = a;
			}
			a = !a;
		}
		a = 0;
		for(int i=0;i<n/2;++i){
			for(int j=i;j<m-i;++j){
				G[n-1-i][j] = a;
			}
			for(int j=i;j<n/2;++j){
				G[n-1-j][i] = a;
				G[n-1-j][m-i-1] = a;
			}
			a = !a;
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cout << G[i][j];
			}
			cout << endl;
		}
	}
	exit(0);
}

/*

   1001
   0110
   0110
   1001

   100001
   011110
   010010
   010010
   011110
   100001

   101010
   001011
   111000
   0

   1001
   0110
   0110
   1001

   101010
   010101
   101010

 */
