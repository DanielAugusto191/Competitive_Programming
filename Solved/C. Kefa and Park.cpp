// https://codeforces.com/contest/580/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int n,m;
vector<vector<int> > g;
vector<int> cat;
vector<int> vis;
int ans = 0;
void dfs(int x, int a){
	a += cat[x];
	if(!cat[x]) a = 0;
	else if(a > m) return; 
	if(!vis[x]){
		vis[x] = 1;
		if ((int)g[x].size()==1 && vis[g[x][0]]) ans++;
		for(auto &e: g[x]) if(!vis[e]) dfs(e, a);
	}
}

int main(){_
	cin>>n>>m;
	g.resize(n);
	vis.resize(n,0);
	cat.resize(n);
	for(int i=0;i<n;++i) cin >> cat[i];
	for(int i=0;i<n-1;i++){
		int a,b;cin>>a>>b;a--;b--;
		g[a].pb(b);
		g[b].pb(a);
	}
	dfs(0, 0);
	cout << ans << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        


