// https://codeforces.com/contest/104/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int n,m;
vector<vector<int> > g;
vector<int> vis;
vector<int> c1;

void dfs(int x){
	vis[x] = 1;
	for(auto& e: g[x]) if(!vis[e]) dfs(e);
}

int dfs1(int x, int p){
	vis[x] = 1;
	c1.pb(x);
	for(auto e: g[x]){
		if(vis[e]){
			if(e != p) return 1;
		}else if(dfs1(e, x)) return 1;
	}
	c1.erase(c1.end()-1);
	return 0;
}
vector<int> c2;
int nn(int x, int p){
	vis[x] = 1;
	c2.pb(x);
	for(auto& e: g[x]){
		if(e != p){
			int ans = 0;
			for(auto& h: c1) if(e==h) {ans =1; break;}
			if(ans) continue;
			if(vis[e]){return 1;}
			else if(nn(e, x)) return 1;
		}
	}
	c2.erase(c2.end()-1);
	return 0;
}

int dfs2(){
	for(auto e: c1) if(nn(e, -1)) return false;
	return true;
}

int main(){
	scanf("%d %d", &n, &m);
	g.resize(n);
	vis.resize(n, 0);
	for(int i=0;i<m;++i){
		int a,b;scanf("%d %d", &a, &b);a--;b--;
		g[a].pb(b);
		g[b].pb(a);
	}
	dfs(0);
	for(int i=0;i<n;++i) if(!vis[i]){
		cout << "NO" << endl;
		exit(0);
	}
	fill(vis.begin(), vis.end(), 0);
	for(int i=0;i<n;++i) if(!vis[i]) if(dfs1(i , -1))break;
	fill(vis.begin(), vis.end(), 0);
	for(auto e: c1) vis[e] = 1;
	if(!(int)c1.size()){
		cout << "NO" << endl;
		exit(0);
	}
	if(dfs2()) cout << "FHTAGN!" << endl; else cout << "NO" << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        


