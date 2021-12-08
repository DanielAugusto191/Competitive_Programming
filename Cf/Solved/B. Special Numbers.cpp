// https://codeforces.com/contest/1594/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9 + 7;

int main(){_
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		ll ans =0, x = 1;
		for(int i=0;i<30;++i){
            if(k & (1<<i)) ans = (ans + x)%MOD;
            x*=n;
            x%=MOD;
		}
        cout << ans << endl;
	}
	exit(0);
}
