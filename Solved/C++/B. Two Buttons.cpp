// https://codeforces.com/problemset/problem/520/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 2e4 + 10;

vector<int> G[MAX];
vector<int> dist(MAX, 0);
vector<bool> vis(MAX, 0);
int main(){
	int n,m;cin>>n>>m;
	queue<int> p;
	p.push(n);
	vis[n] = 1;
	while(!p.empty()){
		int k = p.front(); p.pop();
		if(2*k <= 2*m && !vis[2*k]) G[k].push_back(2*k), p.push(2*k), vis[2*k] = 1;
		if(k-1 > 0 && !vis[k-1]) G[k].push_back(k-1) , p.push(k-1), vis[k-1] = 1;
	}
	priority_queue<int> q;
	q.push(n);
	dist[n] = 0;
 	fill(vis.begin(), vis.end(), 0);
	while(!q.empty()){
		int k =q.top();q.pop();
		for(auto &e: G[k]){
			if(!vis[e]){
				dist[e] = dist[k]+1;
				q.push(e);
				vis[e] = 1;
				if(e == m) break;
			}
		}
	}
	cout << dist[m] << endl;

	exit(0);
}
/*
		4
	3		8
2	   6 7     
*/