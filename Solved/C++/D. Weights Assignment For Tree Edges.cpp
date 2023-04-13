// https://codeforces.com/contest/1611/problem/D
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

void solve(){
	int n;cin>>n;
	vector<int> b(n+1),p(n+1),dist(n+1, -1);
	int r = -1;
	for(int i=1;i<=n;++i) {
		cin >> b[i];
		if(b[i] == i) r = b[i];
	}
	for(int i=1;i<=n;++i) cin >> p[i];
	if(p[1] != r){
		cout << -1 << endl;
		return;
	}
	dist[r] = 0;
	for(int i=2;i<=n;++i){
		if(dist[b[p[i]]] == -1){
			cout << -1 << endl;
			return;
		}
		dist[p[i]] = dist[p[i-1]]+1;
	}
	for(int i=1;i<=n;++i) cout << dist[i]-dist[b[i]] << ' ';
	cout << endl;
}

int main(){_
	int t;cin>>t;
	while(t--) solve();
	exit(0);
}
