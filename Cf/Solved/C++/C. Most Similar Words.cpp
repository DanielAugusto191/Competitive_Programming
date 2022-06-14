// https://codeforces.com/contest/1676/problem/C
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
		int n,m;cin>>n>>m;
		string arr[n];
		for(auto &e: arr) cin >> e;
		int mc = INF;
		for(int i=0;i<n;++i){
			for(int j=i+1;j<n;++j){
				int lc = 0;
				for(int k=0;k<m;++k){
					lc += abs(arr[i][k]-arr[j][k]);
				}
				mc = min(mc, lc);
			}
		}
		cout << mc << endl;
	}
	exit(0);
}