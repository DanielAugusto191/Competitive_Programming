// https://www.spoj.com/problems/DIVSUM/
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
		int n;cin>>n;
		if(n ==1){cout << 0 << endl; continue;}
		ll s = 0;
		int i;
		for(i=1;i*i <= n;++i) if(n%i==0) s += i, s += n/i;
		i--;
		if(i*i == n) s -= i;
		s -= n;
		cout << s << endl;

	}
	exit(0);
}
/*

*/
