// https://atcoder.jp/contests/dp/tasks/dp_e
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5 + 10;

ll n,w;
vector<ll> pesos(100), values(100);
ll memo[110][MAX];

ll dp(int i, ll p){
	if(i == n) return (p==0)? 0 : INF;
	if(p < 0) return LINF;
	if(memo[i][p] != -1) return memo[i][p];
	return memo[i][p] = min(dp(i+1, p), dp(i+1, p-values[i]) + pesos[i]);
}

int main(){_
	cin>>n>>w;
	memset(memo, -1, sizeof memo);
	int mv = 0;
	for(int i=0;i<n;++i) cin >> pesos[i] >> values[i], mv += values[i];
	int ans = 0;
	for(int i=mv;i>=0;--i) if(dp(0, i) <= w) {ans = i; break;}
	cout << ans << endl;


	exit(0);
}
