// https://codeforces.com/contest/1798/problem/B
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
		unordered_map<int,bool> m;
		int n;cin >> n;
		vector<vector<int> > v;
		for(int i=0;i<n;++i){
			int k;cin >> k;
			v.push_back(vector<int>(k));
			for(int i=0;i<k;++i) cin >> v[v.size()-1][i];
		}
		vector<int> ans;
		int c;
		for(int i=n-1;i>=0;--i){
			c = 0;
			for(auto &e: v[i]) {
				if(!m[e] && !c) ans.push_back(e), c = 1;
				m[e] = 1;
			}
			if(!c){
				c = 2;
				break;
			}
		}
		if(c == 2) cout << -1 << endl;
		else{
			for(int i=n-1;i>=0;--i) cout << ans[i] << ' ';
			cout << endl;
		}
	}
	exit(0);
}
/*

*/
