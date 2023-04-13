// https://codeforces.com/problemset/problem/514/A
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
	string s; cin >> s;
	int n = s.size();
	int k = 0;
	if(s[0] == '9') k = 1, cout << '9';
	for(int i=k;i<n;++i) if(s[i]-'0' <= 9-(s[i]-'0')) cout << s[i]; else cout << 9-(s[i]-'0');
	cout << endl;
	exit(0);
}
