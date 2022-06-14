// https://codeforces.com/contest/1676/problem/F
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
		int n, k;cin>>n>>k;
		map<int,int> m;
		vector<int> v;
		int arr[n]; for(auto &e: arr) cin >> e, ++m[e];
		for(auto &e: m) if(e.second >= k) v.push_back(e.first);
		int p = v.size();
		if(p == 0) {cout << "-1" << endl; continue;}
		int lans = v[0], rans = v[0];
		int s = v[0], ss = 0;
		for(int i=1;i<p;++i){
			if(v[i]-v[i-1] == 1){
				if(v[i]-s > ss){
					lans = s;
					rans = v[i];
					ss = v[i]-s;
				}
			}else s = v[i];
		}
		cout << lans << ' ' << rans << endl;
	}
	exit(0);
}