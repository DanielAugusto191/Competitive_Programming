// https://codeforces.com/contest/1669/problem/B
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

map<int,int> m;
int main(){_
	int t;cin >> t;
	while(t--){
		m.clear();
		int n;cin>>n;
		int arr[n];for(auto &e: arr) cin >> e, m[e]++;
		int ans = -1;
		for(auto e: m){
			if(e.second >= 3){
				ans = e.first;
			}
		}
		cout << ans << endl;
	}
	exit(0);
}
