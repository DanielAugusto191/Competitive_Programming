// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2493
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
	int n;
	while(cin >> n && n != 0){
		int x,y; cin >> x >> y;
		for(int i=0;i<n;++i){
			int a,b;cin>>a>>b;
			string ans = "";
			if(a == x || b == y) ans = "divisa";
			else{
				if(b > y) ans += 'N'; else ans += 'S';
				if(a > x) ans += 'E'; else ans += 'O';
			}
			cout << ans << endl;
		}
	}
	exit(0);
}
/*

*/
