// https://codeforces.com/contest/227/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	vector<int> m;
	for(int i=0;i<n;++i){
		int x;cin>>x;
		m[x] = i;
	}
	int q;cin>>q;
	pair<ll,ll> ans = {0,0};
	while(q--){
		int x;cin>>x;
		ans.first += m[x] + 1;
		ans.second += (n - m[x]);
	}
	cout << ans.first << ' ' << ans.second << endl;
	exit(0);
}
