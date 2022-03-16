// https://codeforces.com/gym/317667/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5;

int n,m;
vector<int> v(MAX);
vector<int> vis(MAX);
vector<vector<int> > g(MAX);

int dfs(int e, int k){
	if(vis[e]) return k;
	vis[e] = 1;
	int a = min(k, v[e]);
	for(auto &x: g[e]) if(!vis[x]) a = dfs(x, a);
	return a;
}

int main(){_
	cin>>n>>m;
	for(int i=0;i<n;++i) cin >> v[i];
	for(int i=0;i<m;++i){
		int x,y;cin>>x>>y;x--;y--;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	ll ans = 0;
	for(int i=0;i<n;++i) if (!vis[i]) ans += dfs(i, INF)*1LL;
	cout << ans << endl;
	exit(0);
}
