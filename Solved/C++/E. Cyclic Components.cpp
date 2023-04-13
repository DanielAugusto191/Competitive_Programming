// https://codeforces.com/contest/977/problem/E
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back
#define dbg(a) cout << "DEBUG: " << a << endl;
typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n,m;
vector<vector<int> > g;
vector<int> vis;
vector<int> grau;

bool resp;
void dfs(int x){
	vis[x]=1;
	resp = resp && (grau[x] == 2); 
	for(auto& e: g[x]) if(!vis[e]) dfs(e);
}
int main(){
	cin >> n >> m;
	g.resize(n);
	vis.resize(n);
	grau.resize(n);
	fill(vis.begin(), vis.end(), 0);
	fill(grau.begin(), grau.end(), 0);
	for(int i=0;i<m;++i){
		int a,b;cin>>a>>b;a--;b--;
		g[a].pb(b);
		g[b].pb(a);
		grau[a]++;
		grau[b]++;
	}
	int ans = 0;
	for(int i=0;i<n;++i) if(!vis[i]){
		resp = true;
		dfs(i);
		if(resp) ans++;
	}
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
 
