// https://codeforces.com/contest/1611/problem/C
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
		int m = -INF;
		vector<int> v(n); for(auto &e: v) cin >> e, m = max(m, e);
		if(v[0] != m && v[n-1] != m) {cout << -1 << endl;continue;}
		else for(int i=n-1; i>=0;--i) cout << v[i] << ' ';
		cout << endl;
		
	}
	exit(0);
}
