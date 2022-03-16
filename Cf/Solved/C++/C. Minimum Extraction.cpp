// https://codeforces.com/contest/1607/problem/C
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
		int n;cin>>n;
		vector<ll> v(n);
		for(int i=0;i<n;++i) cin >> v[i];
		sort(v.begin(), v.end());
		ll acc = 0, ans = -INF;
		for(int i=0;i<n;++i){
			v[i] -= acc;
			ans = max(ans, v[i]);
			acc += v[i];
		}
		cout << ans << endl;
	}
	exit(0);
}
