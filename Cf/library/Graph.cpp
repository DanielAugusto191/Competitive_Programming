#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;

vector<int> vis(100);
vector<vector<int> > G(100);

void dfs(int v){ // O(V)
    if(vis[v]) return;
    vis[v] = 1;
    for(auto &e: G[v]) if(!vis[v]) dfs(v);
}
int bfs(){ // O(ELog(V))
    priority_queue<int> q;
	q.push(0);
    	vis[0] = true;
    	while(!q.empty()) {
		int l = -q.top(); q.pop();
		vis[l] = true;
		for(auto &e: G[l]) if(!vis[e]) q.push(-e), vis[e] = true;
	}
}

void floydWarshall(int n){ // O(V³)
	for(int k=0;k<n;++k) for(int i=0;i<n;++i) for(int j=0;j<n;++j) G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
}