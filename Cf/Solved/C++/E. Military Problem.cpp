// https://codeforces.com/contest/1006/problem/E
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
#define f first
#define s second
#define pb push_back
#define endl '\n'
#define dbg(x) cout << "Debug: " << x << endl;
 
typedef pair<int, int> ii;
typedef long long ll;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int INF = 0x3f3f3f3f;
 
vector<vector<int> > g;
// map<int,ii> df; // num, {posI, posF}
vector<int> po1, po2, mpo;
int n, att = 0;
 
void dfs(int x){
     po2[att] = x;
     po1[x] = att++;
     for(auto& e: g[x]) dfs(e);
     mpo[x] = att - 1;
}
int main(){_ 
	int q;
	cin >> n >> q;
	g.resize(n);
     po1.resize(n);po2.resize(n);mpo.resize(n);
	for(int i=1;i<n;++i){
		int a;cin>>a;a--;
		g[a].pb(i);
	}
	for(auto &e: g) sort(e.begin(), e.end());
	dfs(0);
     for(int i=0;i<q;++i){
          int u,k;cin>>u>>k;u--;k--;
          k+=po1[u];
          int ans = -1;
          if(k <= mpo[u]) ans = po2[k] + 1;
          cout << ans << endl;
     }
	exit(0);
}