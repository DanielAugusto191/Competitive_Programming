// https://codeforces.com/gym/317667/problem/D
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

int n,m;
vector<int> g[MAX], vis(MAX);
vector<int> a1[2];

int dfs(int e, int c){
	if(vis[e]) return 0;
	vis[e] = c;
	a1[c-1].push_back(e);
	for(auto &x: g[e]){
		if(vis[x] == c) return -1;
		if(!vis[x]) if(dfs(x, (c==1? 2:1)) == -1) return -1;
	}
	return 0;
}

int main(){_
	cin >> n >> m;
	for(int i=0;i<m;++i){
		int x,y;cin>>x>>y;--x;--y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for(int i=0;i<n;++i) if((int)g[i].size() > 0 && dfs(i, 2) == -1) {cout << -1 << endl; return 0;}
	cout << a1[0].size() << endl;
	for(auto &e: a1[0]) cout << e+1 << ' ';
	cout << endl;
	cout << a1[1].size() << endl;
	for(auto &e: a1[1]) cout << e+1 << ' ';
	cout << endl;
	exit(0);
}
