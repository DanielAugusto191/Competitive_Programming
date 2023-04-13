// https://www.codechef.com/problems/PRPOTION?tab=statement
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
		int r,g,b,m;cin>>r>>g>>b>>m;
		int mm[3] = {-INF, -INF, -INF};
		for(int i=0;i<r;++i){
			int a;cin>>a;
			mm[0] = max(mm[0], a);
		}
		for(int i=0;i<g;++i){
			int a;cin>>a;
			mm[1] = max(mm[1], a);
		}
		for(int i=0;i<b;++i){
			int a;cin>>a;
			mm[2] = max(mm[2], a);
		}
		sort(mm, mm+3);
		while(m--){
			mm[2] /= 2;
			sort(mm, mm+3);
		}
		cout << mm[2] << endl;

	}
	exit(0);
}
/*

*/
