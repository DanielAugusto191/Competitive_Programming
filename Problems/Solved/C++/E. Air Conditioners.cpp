// https://codeforces.com/problemset/problem/1547/E
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
	int q;cin >> q;
	while(q--){
		string p;getline(cin, p);
		int n,k;cin>>n>>k;
		int arr[k]; for(auto &e: arr) cin >> e, e--;
		map<int,int> at; for(auto &e: arr) {int a;cin>>a;at[e] = a;}
		int dpL[n], dpR[n]; for(int i=0;i<n;++i) dpL[i] = INF, dpR[i] = INF;
		int ans[n];
		int prev = INF;
		for(int i=0;i<n;++i){
			dpL[i] = min(prev+1, (at[i]?at[i]:INF));
			prev = dpL[i];
		}
		prev = INF;
		for(int i=n-1;i>=0;--i){
			dpR[i] = min(prev+1, (at[i]?at[i]:INF));
			prev = dpR[i];
		}
		for(int i=0;i<n;++i) ans[i] = min(dpR[i], dpL[i]);
		for(auto &e: ans) cout << e << ' ';
		cout << endl;
	}
	exit(0);
}
