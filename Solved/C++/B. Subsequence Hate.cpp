// https://codeforces.com/contest/1363/problem/B
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

void solve(){
	string s; cin >> s;
	int n0 = 0,n1 = 0;
	for(char e: s) if(e == '0') ++n0; else ++n1;
	int n = s.size();
	int ans = INF;
	int cz = 0, co = 0;
	for(int j=0;j<n;++j){
		if(s[j] == '0') ++cz; else ++co;
		int cl = cz + n1 - co, cr = co + n0 - cz; 
		ans = min(ans, min(cl, cr));
	}
	cout << ans << endl;
}

int main(){_
	int t;cin>>t;
	while(t--){
		solve();
	}
	exit(0);
}
