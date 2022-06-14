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
		string s;cin>>s;
		vector<pii> v;
		
		int l=0;
		for(int i=0;i<n;++i){
			if(s[i] == 'B'){
				l = i;
				while(i < n && s[i] == 'B') i++;
				v.push_back({l, i});
			}
		}
		// for(auto e: v) cout << e.first << ' ' << e.second << endl;
		vector<pii> cb;
		int nm = v.size();
		cb.push_back({v[0].first, v[0].first + v[0].second-v[0].first});
		for(int i=1;i<nm;++i) cb.push_back({v[i].first-v[i-1].second, v[i-1].second-v[i-1].first + v[i].first-v[i-1].second + v[i].second-v[i].first});
		cb.push_back({n-v[nm-1].second, n-v[nm-1].second + v[nm-1].second - v[nm-1].first});
		// cout << "CUSTO" << endl;
		// for(auto e: cb) cout << e.first << ' ' << e.second << endl;
		

	}
	exit(0);
}
