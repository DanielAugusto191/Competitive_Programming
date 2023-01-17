// https://codeforces.com/problemset/problem/233/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	if(n&1) cout << -1 << endl;
	else{
		for(int i=1;i<=n;++i) if(i&1) cout << i+1 << ' '; else cout << i-1 << ' ';
		cout << endl;
	}
	exit(0);
}
