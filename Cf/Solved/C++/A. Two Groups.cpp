// https://codeforces.com/contest/1747/problem/A
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
const int MAX = 2e5 + 10;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		ll s = 0;
		for(int i=0;i<n;++i){
			int a;cin>>a;
			s += a;
		}
		cout << abs(s) << endl;
	}
	exit(0);
}
