// https://codeforces.com/contest/1676/problem/A
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
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int a = s[0]-'0' + s[1]-'0' + s[2] - '0';
		int b = s[3]-'0' + s[4]-'0' + s[5] - '0';
		if(a==b) cout << "YES" << endl; else cout << "NO" << endl;
	}
	exit(0);
}