// 
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
	int t;cin >> t;
	while(t--){
		int n;cin>>n;
		char k; cin >> k;
		string s;cin>>s;
		int l = n/2, ok = 0;
		int ans = -1;
		for(auto &c: s) {if(c != k) {ans = 0;break;}}
		if(ans == -1){
			cout << 0 << endl;
			continue;
		}
		for(int i=l;i<n;++i){
			if(s[i] == k){
				ans = i+1;
				ok = 1;
				break;
			}
		}
		if(ok){
			cout << 1 << endl;
			cout << ans << endl;
			continue;
		}
		cout << 2 << endl;
		cout << n << ' ' << n-1 << endl;
		// vector<int> ans;
		// if(ok) ans.push_back(l+1);
		// if(s[l] != k) ans.push_back(l+2);
		// cout << ans.size() << endl;
		// if(ans.size() != 0){
		// for(auto &e: ans) cout << e << ' ';
		// cout << endl;}

	}
	exit(0);
}
