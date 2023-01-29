// https://codeforces.com/contest/1780/problem/A
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
		vector<int> o,e;
		for(int i=0;i<n;++i) {int a;cin >> a;if(a%2) o.push_back(i+1);else e.push_back(i+1);}
		if(o.size() == 0) cout << "NO" << endl;
		else if(e.size() >= 2) cout << "YES" << endl << o[0] << ' ' << e[0] << ' ' << e[1] << endl;
		else if(o.size() >= 3) cout << "YES" << endl << o[0] << ' ' << o[1] << ' ' << o[2] << endl;
		else cout << "NO" << endl;
	}
	exit(0);
}
/*

*/
