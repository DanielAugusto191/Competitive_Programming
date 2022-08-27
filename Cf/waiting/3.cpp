// 
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
const int MAX = 2e5 + 10;

int main(){_
	int n;cin>>n;
	vector<int> G[n];
	vector<int> dist(n, INF), vis(n, 0);
	for(int i=0;i<n-1;++i){
		int a,b;cin>>a>>b;a--;b--;
		G[a].push_back(b);
	}
	priority_queue<int> q;
	vis[0] = 1;
	dist[0] = 0;
	q.push(0);
	while(!q.empty()){
		int k = q.top();q.pop();
		for(auto &e: G[k]){
			if(!vis[e]){
				vis[e] = 1;
				dist[e] = dist[k] + 1;
				q.push(e);
			}
		}
	}
	int ant = 0, ans = 1;
	int a;cin>>a;
	if(a != 1){
		cout << "NO" << endl;
	}else{
		for(int i=1;i<n;++i){
			int a;cin>>a;a--;
			if(dist[a] < ant){
				ans = 0;
				// break;
			}
			ant = dist[a];
		}
		cout << (ans?"YES":"NO") << endl;
	}
	exit(0);
}
