// https://codeforces.com/contest/1176/problem/E
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
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		vector<int> G[n];
		for(int i=0;i<m;++i){
			int a,b;cin>>a>>b;a--;b--;
			G[a].push_back(b);
			G[b].push_back(a);
		}
		vector<int> vis(n, 0);
		int arr[n];
		queue<int> q;
		q.push(0);
		arr[0] = 0;
		vis[0] = 1;
		int n2[2] = {1, 0};
		while(!q.empty()){
			int k = q.front(); q.pop();
			for(auto &e: G[k]) if(!vis[e]) {
				q.push(e);
				vis[e] = 1;
				arr[e] = (arr[k] == 0);
				n2[arr[e]]++;
				}
		}
		if(n2[0] > n2[1]){
			cout << n2[1] << endl;
			for(int i=0;i<n;++i) if(arr[i] == 1) cout << i+1 << ' ';
			cout << endl;
		}else{
			cout << n2[0] << endl;
			for(int i=0;i<n;++i) if(arr[i] == 0) cout << i+1 << ' ';
			cout << endl;
		}
	}
	exit(0);
}
