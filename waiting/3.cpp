// 
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
	int n;cin>>n;
	unordered_map<ll, bool> ans;
	ll a;cin >> a;
	for(int i=1;i<n;++i){
		ll b;cin >> b;
		ans[(abs(b-a))] = 1;
		a = b;
	}
	bool ok = 1;
	for(int i=0;i<n-1;++i) if(ans.find(i+1) == ans.end()) {ok = 0; break;}
	cout << (ok?"Jolly":"Not jolly") << endl;
	exit(0);
}
/*

*/
