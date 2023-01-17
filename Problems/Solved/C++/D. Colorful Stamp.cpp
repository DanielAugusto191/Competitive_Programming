// https://codeforces.com/contest/1669/problem/D
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
int n;
string s;
void solve(){
	if(n == 1){
		if(s[0] != 'W')
			cout << "NO" << endl;
		else cout << "YES" << endl;
		return;
	}
	int cb = 0;
	int cr = 0;
	for(int i=s[0] == 'W';i<n;++i){
		if(s[i] == 'R') cr ++;
		else if(s[i] == 'B') cb++;
		else if(s[i] == 'W'){
			if((cb == 0 && cr != 0) || (cr == 0 && cb != 0)){
				cout << "NO" << endl;
				return;
			}
			cb = cr = 0;
		}
	}
	if(s[n-1] == 'W'){
		cout << "YES" << endl;
		return;
	}
	if((cb == 0 && cr != 0) || (cr == 0 && cb != 0)){
		cout << "NO" << endl;
	}else cout << "YES" << endl;
}

int main(){_
	int t;cin >> t;
	while(t--){
		cin>>n;
		cin >> s;
		solve();
	}
	exit(0);
}