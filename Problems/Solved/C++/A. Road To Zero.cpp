// https://codeforces.com/contest/1342/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto& e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto& e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){_
	int t;cin>>t;
	while(t--){
		ll x,y,a,b;cin>>x>>y>>a>>b;
		// if(!x && !y){
		// 	cout << 0 << endl;
		// 	continue;
		// }
		ll ans = (b>2*a)? (x+y)*a : min(x,y)*b + (max(x,y)-min(x,y))*a;
		cout << ans*1ll << endl;
	}
	return (0);
}
