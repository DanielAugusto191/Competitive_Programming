// https://codeforces.com/gym/317667/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 5e5 + 10;

vector<int> vis(MAX), ans(MAX);
vector<int> g[MAX];
int n,m;
int main(){_
	cin >> n >> m;
	for(int j=0;j<m;++j){
		int k;cin>>k;
		int arr[k];
		for(int i=0;i<k;++i) cin >> arr[i],arr[i]--;
		for(int i=0;i+1 < k;++i){
			g[arr[i]].push_back(arr[i+1]);
			g[arr[i+1]].push_back(arr[i]);
		}
	}
	for(int i=0;i<n;++i){
		if(!vis[i]){
			vector<int> comp;
			queue<int> q;
			q.push(i);
			while(!q.empty()){
				int x = q.front();
				q.pop();
				if(vis[x]) continue;
				vis[x] = 1;
				comp.push_back(x);
				for(int y: g[x]) if(!vis[y]) q.push(y);
			}
			for(int x: comp) ans[x] = (int)comp.size();
		}
	}
	for(int i=0;i<n;++i) cout << ans[i] << ' ';
	cout << endl;
	exit(0);
}
