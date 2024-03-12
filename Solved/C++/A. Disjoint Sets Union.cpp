// https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/A
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
const int MOD = (int)1e9 + 7;
const int MAX = 1e9;

vector<int> id,sz;
int find(int p){
	return id[p] = ((id[p] == p)? p : find(id[p]));
}
void uni(int p, int q){
	p = find(p), q = find(q);
	if(p == q) return;
	if(sz[p] > sz[q]) swap(p, q);
	id[p] = q, sz[q] += sz[p];
}

int main(){_
	int n,m; cin >> n >> m;
	id.resize(n);
	iota(id.begin(),id.end(), 0);
	sz.resize(n, 1);
	while(m--){
		string s;cin >> s; int u,v;cin >>u>>v;--u,--v;
		if(s == "union"){
			uni(u, v);
		}else{
			cout << (find(u) == find(v)? "YES":"NO") << endl;
		}
	}
	exit(0);
}
/*

*/
