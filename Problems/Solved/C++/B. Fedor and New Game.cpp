// https://codeforces.com/problemset/problem/467/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

vector<bitset<20> > v(1010);
int main(){_
	int n,m,k;cin >> n >> m >> k;
	for(int i=0;i<m;++i){
		int a; cin>>a;
		v[i] = bitset<20>(a);
	}
	int x; cin >> x;
	int ans = 0;
	for(int i=0;i<m;++i) if((v[i] ^ bitset<20>(x)).count() <= k) ans++;
	cout << ans << endl;

	exit(0);
}
