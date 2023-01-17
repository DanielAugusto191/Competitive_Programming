// https://codeforces.com/contest/1607/problem/A
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
		unordered_map<int,int> m;
		for(int i=1;i<=26;++i){
			char c;cin>>c;
			m[c] = i;
		}
		string s;cin>>s;
		int n = s.size();
		int ans =0;
		for(int i=1;i<n;++i){
			ans += abs(m[s[i]]-m[s[i-1]]);
		}
		cout << ans << endl;

	}
	exit(0);
}
