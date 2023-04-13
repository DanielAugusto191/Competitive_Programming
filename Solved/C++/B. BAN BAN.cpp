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
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ans = n/2 + n%2;
		cout << ans << endl;
		int i = 0;
		int l = n/2;
		int k = l*3;
		for(;i<l;++i) cout << 3*i + 1<< ' ' << k + 3*i + 2 << endl;
		if(n%2)	cout << k + 3*i + 1 << ' ' << k + 3*i + 1 + 2 << endl;
	}
	exit(0);
}
/*
BANBANBAN
BABNABBNA
BANBANBAN | BANBANBAN | BAN  ->
AANAANAAN | BBNBBNBBN | 
BAN | BAN | BAN
AAN | BBN | NAB
*/
