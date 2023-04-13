// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2595
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
	int n,b,h,w;
	while(cin >> n >> b >> h>> w) {
		int fans = INF;
		for(int i=0;i<h;++i){
			int v; cin >> v;
			int ans = INF;
			for(int j=0;j<w;++j){
				int a;cin >> a;
				if(a >= n) ans = v*n;
			}
			if(n*v > b) continue;
			fans = min(ans, fans);
		}
		if(fans == INF) cout << "stay home" << endl;
		else cout << fans << endl;
	}
	exit(0);
}
/*

*/
