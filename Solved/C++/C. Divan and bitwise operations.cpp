// https://codeforces.com/contest/1614/problem/C
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
const int MOD = 1e9+7;

int main(){_
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int k = 0;
		for(int i=0;i<m;++i){
			int l,r,x;cin >> l >> r >> x;
			k |= x;
		}
		int l = 1;
		for(int i=0;i<n-1;++i) l = (l*2)%MOD;
		cout << (k*1LL*l)%MOD << endl;
	}
	exit(0);
}
