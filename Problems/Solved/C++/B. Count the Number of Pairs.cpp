// https://codeforces.com/contest/1800/problem/B
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

int main(){_
	int t;cin>>t;
	while(t--){
		int n,k;cin >> n >> k;
		pii arr[26];
		for(auto &e: arr) e.first = e.second = 0;
		string s;cin >> s;
		for(auto e: s){
			int l = toupper(e);
			if(e >= 65 && e <= 90) arr[toupper(e) - 65].second++;
			else arr[toupper(e) - 65].first++;
		}
		int ans = 0;
		for(auto &e: arr){
			int p = min(k, abs(e.first-e.second)/2);
			ans += min(e.first, e.second)+p;
			k -= p;
		}
		cout << ans << endl;
	}
	exit(0);
}
/*

*/
