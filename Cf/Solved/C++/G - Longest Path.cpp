// https://atcoder.jp/contests/dp/tasks/dp_g
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5;

vector<int> G[MAX];
int memo[MAX];

int dp(int i){
	if(G[i].size() == 0) return 0;
	int k = G[i].size();
	int mm = -INF;
	for(int j=0;j<k;++j) mm = max(mm, 1+dp(G[i][j]));
	return memo[i] = mm;
}

int main(){_
	int n,m;cin>>n>>m;
	memset(memo, -1, sizeof memo);
	for(int i=0;i<m;++i){
		int a,b;cin>>a>>b;a--;b--;
		G[a].push_back(b);
	}
	int ans = -INF;
	for(int i=0;i<n;++i){
		if(memo[i] == -1) ans = max(ans, dp(i));
		else ans = max(ans, memo[i]);
	}
	cout << ans << endl;
	exit(0);
}
