// https://cses.fi/problemset/task/1069/
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
	string s;cin>>s;
	int n = s.size();
	int x = 1;
	int ans = -INF;
	for(int i=1;i<n;++i) if(s[i] == s[i-1]) x++; else ans = max(ans, x),x=1;
	ans = max(ans, x);
	cout << ans << endl;
	exit(0);
}
