#include <bits/stdc++.h>
using namespace std;
const int MAX = 100;

vector<int> vis(100);
vector<vector<int> > G(100);
void dfs(int v){
    if(vis[v]) return;
    vis[v] = 1;
    for(auto &e: G[v]) if(!vis[v]) dfs(v);
}

int bfs(){
    
}
