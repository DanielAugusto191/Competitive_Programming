// https://codeforces.com/problemset/problem/476/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5;
int main(){_
	int t;cin>>t;
	while(t--){
		int a,b,c; cin >> a >> b >> c;
		b = abs(b-c) + abs(c-1);
		a--;
		if(a < b) cout << 1;
		else if(b < a) cout << 2;
		else cout << 3;
		cout << endl;
	}
}