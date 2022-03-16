// https://codeforces.com/contest/1607/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int t;cin>>t;
	while(t--){
		ll x,n;cin>>x>>n;
		ll ans;
		if(x&1){
			if(n%4 ==0) ans = x;
			else if(n%4 == 1) ans = 1LL * (x+n);
			else if(n%4 == 2) ans = 1LL*(x-1);
			else if(n%4 == 3) ans = 1LL*(x-(n+1))*1LL;
			cout << ans << endl;
		}else 
		{
			if(n%4 ==0) ans = x;
			else if(n%4 == 1) ans = 1LL * (x-n);
			else if(n%4 == 2) ans = 1LL*(x+1);
			else if(n%4 == 3) ans = 1LL*(x+n+1)*1LL;
			cout << ans << endl;
		}
	}
	exit(0);
}
