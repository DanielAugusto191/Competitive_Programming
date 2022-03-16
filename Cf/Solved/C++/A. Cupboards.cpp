// https://codeforces.com/problemset/problem/248/A
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
	int ans = 0;
	int lt=0,rt=0;
	for(int i=0;i<n;++i){
		int l,r;cin>>l>>r;
		lt += l;
		rt += r;
	}
	ans = min(lt, n-lt)+ min(rt, n-rt);
	cout << ans << endl;
	exit(0);
}
