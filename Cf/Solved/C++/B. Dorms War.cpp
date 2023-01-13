//https://codeforces.com/contest/1670/problem/B
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
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		int k;cin >> k;unordered_map<char,int> m;
		for(int i=0;i<k;++i) {char a; cin >> a; m[a] = 1;}
		int antv = 0, ans = 0, c = 0;
		for(int i=0;i<n;++i){
			if(m[s[i]]){
				ans = max(ans,(i-antv+c));
				c = 1;
				antv = i+1;
			}
		}
		cout << ans << endl;


	}
	exit(0);
}
/*

*/
