// https://codeforces.com/contest/1611/problem/B
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
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		if(a > b) swap(a,b);
		int k = b-a;
		b -= k;
		k = min(a, k/2);
		a -= k;b -= k;
		k += (a+b)/4;
		cout << k << endl;
	}
	exit(0);
}
