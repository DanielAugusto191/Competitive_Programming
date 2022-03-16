// https://codeforces.com/contest/1593/problem/D1
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
		set<int> s;
		for(int i=0;i<n;++i) {int x; cin >> x; s.insert(x);}
		if(s.size() == 1){
			cout << -1 << endl;
			continue;
		}
		int ans = *(++s.begin()) - *(s.begin());
		set<int>::iterator k = s.begin(); ++k; ++k;
		while(k != s.end()){
			int x = *(--k);
			++k;
			ans = __gcd(ans, *k-x);
			++k;
		}
		if(ans) cout << ans << endl;
		
		
	}
	exit(0);
}
