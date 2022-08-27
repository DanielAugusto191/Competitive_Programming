// https://codeforces.com/contest/476/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int n,m;cin>>n>>m;
	int i;
	for(i=ceil(n*1.0/2);i<n;++i){
		if(i%m == 0) break;
	}
	if(i%m == 0) cout << i << endl;
	else cout << -1 << endl;
	exit(0);
}