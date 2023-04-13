// https://codeforces.com/contest/272/problem/A
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
	int tt = 0, ans = 0;
	for(int i=0;i<n;++i){
		int x;cin>>x;
		tt+=x;
	}
	n++;
	
	for(int i=1;i<=5;++i) if((tt+i)%n != 1) ++ans;
	cout << ans << endl;
	exit(0);
}
