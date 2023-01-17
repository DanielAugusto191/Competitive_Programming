// https://codeforces.com/contest/1037/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;


int main(){_
	int n;cin>>n;
	vector<int> c(n, 0);
	string s,t;cin>>s>>t;
	int ans = 0;
	c[0] = (s[0] != t[0]);
	for(int i=1;i<n;++i){
		if(s[i] == t[i]) c[i] = 0;
		else{
			if(c[i-1] != 0){
				if(s[i] != s[i-1]) c[i] = 0;
				else c[i] = 1;
			}else{
				c[i] = 1;
			}
		}
	}
	for(auto e: c) ans += e;
	cout << ans << endl;
	exit(0);
}
