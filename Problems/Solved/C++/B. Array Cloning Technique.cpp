// https://codeforces.com/contest/1665/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;};

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5 + 10;

map<int,int> m;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		m.clear();
		for(int i=0;i<n;++i){
			int a;cin>>a;
			m[a]++;
		}
		ii mm = (*max_element(m.begin(), m.end(), [&](ii a, ii b){
			return a.second < b.second;
		}));
		int ans = 0;
		while(mm.second < n){
			ans += (n - 2*mm.second < 0)? n-mm.second : mm.second;
			++ans;
			mm.second *= 2;
		}
		cout << ans << endl;

	}
	exit(0);
}
