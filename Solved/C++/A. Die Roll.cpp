// https://codeforces.com/contest/9/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int a,b;cin>>a>>b;
	int k = 6-max(a,b)+1;
	int l = __gcd(6, k);
	cout << k/l << '/' << 6/l << endl;
	exit(0);
}
