// https://codeforces.com/contest/1619/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n = (int)s.size();
		if(n & 1) {
			cout << "NO" << endl;
			continue;
		}
		int ans = 1;
		for(int i=0;i<n/2;++i){
			if(s[i] != s[n/2 + i]){
				ans = 0;
				break;
			}
		}
		cout << (ans? "YES": "NO") << endl;

	}
	exit(0);
}
