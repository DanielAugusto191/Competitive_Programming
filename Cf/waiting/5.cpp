// 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

unordered_set<int> s;
int main(){_
	int t;cin>>t;
	while(t--){
		int mm = INF;
		s.clear();
		int n;cin>>n;
		for(int i=0;i<n;++i) {int x;cin>>x;s.insert(x);mm = min(mm, x);}
		if(s.size() == 1){
			cout << -1 << endl;
			continue;
		}
		auto is = s.begin();
		int ans = *is - mm;
		while(++is != s.end()) if(*is != mm) ans = __gcd(ans, *is-mm);
		cout << ans << endl;

	}
	

	exit(0);
}
