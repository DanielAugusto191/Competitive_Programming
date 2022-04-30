// 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 2e5+10;
int n,k;
vector<int> x;
vector<int> G[MAX];
bool vis[MAX];
int dist[MAX];

void solve(){
	cin>>n>>k;
	for(int i=0;i<n;++i) G[i].clear();
	x.resize(k);
	for(int i=0;i<k;++i) cin >> x[i], x[i]--;
	for(int i=0;i<n-1;++i){
		int u,v;cin>>u>>v;--u;--v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	memset(vis, 0, sizeof vis);
	memset(dist, INF, sizeof dist);
	queue<int> q;
	for(auto &e: x) q.push(e), vis[e] = 1, dist[e] = 0;
	while(!q.empty()){
		int v = q.front();q.pop();
		for(int &w: G[v]) if(!vis[w]) q.push(w), vis[w] = 1, dist[w] = dist[v]+1;
	}
	memset(vis, 0, sizeof vis);
	q.push(0), vis[0] = 1, dist[0] = 0;
	int ans = -1;
	while(!q.empty()){
		int v = q.front();q.pop();
		if(v != 0 && (int)G[v].size() == 1){
			ans = 1;
			break;
		}
		for(int &w: G[v]) if(!vis[w] && dist[v]+1 < dist[w]) q.push(w), vis[w] = 1, dist[w] = dist[v]+1;
	}
	if(ans == -1) cout << "NO" << endl;
	else cout << "YES" << endl;



}

int main(){_
	int t;cin>>t;
	while(t--) solve();
	exit(0);
}
