// https://codeforces.com/edu/course/2/lesson/7/2/practice/contest/289391/problem/A
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
const int MAX = 1e5 + 5;

vector<int> id;

int find(int p){
	return id[p] = (id[p] == p?p:find(id[p]));
}

void uni(int p, int q){
	p = find(p);
	q = find(q);
	id[p] = q;
}

int main(){_
	int n,m; cin >> n >> m;
	id = vector<int>(n+2);
	iota(id.begin(), id.end(), 0);
	while(m--){
		char c; cin >> c;
		int x; cin >> x;
		if(c == '-') uni(x, x+1);
		else cout << ((find(x) == n+1)? -1 : find(x)) << endl;
	}
	exit(0);
}
/*

*/
