// https://codeforces.com/contest/1619/problem/B
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
		int n;cin>>n;
		int l = sqrt(n), r = cbrt(n);
		set<int> s;
		for(int i=1;i<=l;++i) s.insert(i*i);
		for(int i=1;i<=r;++i) s.insert(i*i*i);
		cout << (int)s.size() << endl;

	}
	exit(0);
}
