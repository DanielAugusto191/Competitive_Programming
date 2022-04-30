// https://codeforces.com/contest/1669/problem/A
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
	int t;cin >> t;
	while(t--){
		int r;cin>>r;
		if(1900 <= r) cout << "Division 1";
		else if(1600 <= r && r <= 1899) cout << "Division 2";
		else if(1400 <= r && r <= 1599) cout << "Division 3";
		else if(r <= 1399) cout << "Division 4";
		cout << endl;
	}
	exit(0);
}
