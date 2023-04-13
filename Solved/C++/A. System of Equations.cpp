// https://codeforces.com/contest/214/problem/A
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
	int n,m;cin>>n>>m;
	int k = ceil(sqrt(min(n,m)))+1;
	int ans = 0;
	for(int i=0;i<k;++i){
		int l = min(n,m) - pow(i,2);
		if(l<0)continue;
		if(pow(l,2) + i == max(n,m)) ans++;
	}
	cout << ans << endl;
	exit(0);
}
