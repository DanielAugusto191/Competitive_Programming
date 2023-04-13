// https://codeforces.com/contest/1593/problem/C
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
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		vector<ll> v(k);for(auto &e: v) cin >> e, e = n-e;
		sort(v.begin(),v.end());
		for(int i=1;i<k;++i) v[i] = v[i]+v[i-1];
		ll ans = lower_bound(v.begin(),v.end(), n) - v.begin();
		cout << ans << endl;

	}
	exit(0);
}
