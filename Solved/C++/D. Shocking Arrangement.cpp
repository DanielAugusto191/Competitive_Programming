// https://codeforces.com/contest/1798/problem/D
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
		int n;cin >> n;
		int z = -INF;
		vector<int> p, ne;
		for(int i=0;i<n;++i){
			int a;cin >> a;
			z = max(z, a);
			if(a >= 0) p.push_back(a);
			else if(a < 0) ne.push_back(a);
		}
		if(z == 0){
			cout << "No" << endl;
			continue;
		}
		vector<int> ans;
		int s = 0;
		for(int i=0;i<n;++i){
			if(s > 0){
				s += *ne.rbegin();
				ans.push_back(*ne.rbegin());
				ne.erase(ne.end()-1);
			}else{
				s += *p.rbegin();
				ans.push_back(*p.rbegin());
				p.erase(p.end()-1);
			}
		}
		cout << "Yes" << endl;
		for(int i=0;i<n;++i) cout << ans[i] << ' ';
		cout << endl;
	}
	exit(0);
}
/*

*/
