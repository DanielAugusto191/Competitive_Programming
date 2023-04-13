// https://codeforces.com/contest/1690/problem/D
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
		string s; cin >> s;
		int l = s.size();
		int arr[n];
		arr[0] = (s[0] == 'W');
		for(int i=1;i<l;++i) if(s[i] == 'W') arr[i] = arr[i-1]+1; else arr[i] = arr[i-1];
		int w = arr[k-1];
		int ans = w;
		for(int i=k;i<n;++i){
			w = arr[i] - arr[i-k];
			ans = min(ans, w);
		}
		cout << ans << endl;

	}
	exit(0);
} // 0 0 1 1 2
