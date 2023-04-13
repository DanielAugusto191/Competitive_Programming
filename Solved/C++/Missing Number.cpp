// https://cses.fi/problemset/task/1083/
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
	int n;cin>>n;
	ll arr[n-1];for(auto &e: arr) cin >> e;
	int x = 0;
	for(int i=0;i<n-1;++i) x ^= arr[i];
	for(int i=1;i<n+1;++i) x ^= i;
	cout << x << endl;
	exit(0);
}
