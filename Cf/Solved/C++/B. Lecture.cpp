// https://codeforces.com/problemset/problem/499/B
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

int main(){_
	int n,m;cin >> n >> m;
	map<string, pair<int, pair<string, int> > > mm;
	for(int i=0;i<m;++i){
		string s, k; cin >> s >> k;
		mm[s] = {(int)s.size(), {k, (int)k.size()}};
	}
	for(int i=0;i<n;++i){
		string s; cin >> s;
		int v = (1 > 3)? 1 : 2;
		cout << ((mm[s].first <= mm[s].second.second )? s : mm[s].second.first) << ' ';
	}
	cout << endl;
	exit(0);
}
