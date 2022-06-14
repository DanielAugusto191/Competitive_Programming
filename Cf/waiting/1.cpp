// https://codeforces.com/contest/1176/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;


int main(){_
	int n;cin >> n;
	map<int,int> m;
	m[4] = 0;
	m[8] = 0;
	m[15] = 0;
	m[16] = 0;
	m[23] = 0;
	m[42] = 0;
	int arr[n]; for(auto &e: arr) cin >> e, ++m[e];
	int k = INF;
	for(auto e: m) cout << e.first << ' ' << e.second << endl;
	for(auto e: m) k = min(k, e.second);
	// dbg(k);
	cout << n - 6 * k << endl;
	exit(0);
}

// 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 8 15 16 23 42 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4 4