// https://codeforces.com/contest/1800/problem/A
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

void solve(){
	int n;cin >> n;
	string s;cin >> s;
	int i = 0;
	if(toupper(s[i]) != 'M') {cout << "NO" << endl;return;}
	while(i < n && toupper(s[i]) == 'M') ++i;
	if(i == n || toupper(s[i]) != 'E'){cout << "NO" << endl; return;}
	while(i < n && toupper(s[i]) == 'E') ++i;
	if(i == n || toupper(s[i]) != 'O'){cout << "NO" << endl; return;}
	while(i < n && toupper(s[i]) == 'O') ++i;
	if(i == n || toupper(s[i]) != 'W'){cout << "NO" << endl; return;}
	while(i < n && toupper(s[i]) == 'W') ++i;
	if(i != n) {cout << "NO" << endl; return;}
	cout << "YES" << endl;
 }

int main(){_
	int t;cin>>t;
	while(t--){
		solve();
	}
	exit(0);
}
/*

*/
