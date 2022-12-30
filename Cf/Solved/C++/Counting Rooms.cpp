// https://cses.fi/problemset/task/1192/
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}
#define f first
#define s second 

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int n,m;
vector<char> G[1000];
vector<vector<bool> > vis(1000, vector<bool>(1000, 0));

vector<pii> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool val(pii u){
	return u.f >= 0 && u.f < n && u.s >= 0 && u.s < m && G[u.f][u.s] == '.' && !vis[u.f][u.s];
}

void dfs(int i, int j){
	vis[i][j] = 1;
	for(auto u: mov){
		u.f += i, u.s += j;
		if(val(u)) dfs(u.f, u.s);
	}
}

int main(){_
	cin>>n>>m;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			char c; cin >> c;
			G[i].push_back(c);
		}
	}
	int ans = 0;
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(G[i][j] == '.' && !vis[i][j]){
				ans++;
				dfs(i, j);
			}
		}
	}
	cout << ans << endl;
	exit(0);
}
