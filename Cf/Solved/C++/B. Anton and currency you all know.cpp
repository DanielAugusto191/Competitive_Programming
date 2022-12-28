// https://codeforces.com/contest/508/problem/B
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
	string s;cin >> s;
	int n = s.size();
	bool ans = 0;
	int lp = -1;
	for(int i=0;i<n-1;++i){
		if((s[i]-'0')%2==0){
			ans = 1;
			if(s[i]-'0' < s[n-1]-'0') {lp = i; break;} else lp = i;
		}
	}
	if(!ans) {cout << -1 << endl;exit(0);}
	swap(s[lp], s[n-1]);
	cout << s << endl;

	exit(0);
}
