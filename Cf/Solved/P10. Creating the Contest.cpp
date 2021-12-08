// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P10
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
	vector<int> v(n);for(auto &e: v) cin >> e;
	int ans = 1, c = 1;
	for(int i=1;i<n;++i){
		if(v[i] <= 2*v[i-1]) ++c; else c=1;
		ans = max(ans, c);
	}	
	cout << ans << endl;
	exit(0);
}
