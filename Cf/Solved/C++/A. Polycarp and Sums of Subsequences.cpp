// https://codeforces.com/contest/1618/problem/A
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
		vector<int> b(7); for(auto &e: b) cin >> e;
		sort(b.begin(), b.end());
		cout << b[0] << ' ' << b[1] << ' ' << b[6]-(b[0]+b[1]) << endl;
	}
	exit(0);
}