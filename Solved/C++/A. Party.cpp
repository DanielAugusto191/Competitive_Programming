// https://codeforces.com/contest/115/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<int> vis;
vector<vector<int> > g;
int dfs(int x, int size){
	vis[x] = 1;
	int ans = -INF;
	for(auto &e: g[x]) if(!vis[e]) ans = max(ans, dfs(e, size+1));
	return ans;
}

int main(){_
	int n;cin>>n;
	g.resize(n+1);
	vis.resize(n+1);
	vector<int> roots;
	for(int i=1;i<=n;++i){
		int x;cin>>x;
		if(x != -1) g[x].push_back(i);
		else roots.push_back(i);
	}
	int ans = -INF;
	for(auto &e: roots){
		fill(vis.begin(), vis.end(), 0);
		ans = max(ans, dfs(e, 0));
	}
	cout << ans+1 << endl;

	exit(0);
}
