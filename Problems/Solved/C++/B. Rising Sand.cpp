// https://codeforces.com/contest/1698/problem/B
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
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[n]; for(auto &e: arr) cin >> e;
		if(k == 1){
			cout << (n-1)/2 << endl;
			continue;
		}
		int ans = 0;
		for(int i=1;i<n-1;++i) ans += (arr[i] > arr[i-1]+arr[i+1]);
		cout << ans << endl;
	}
	exit(0);
}
/*
1111
1351
11111
13151
*/