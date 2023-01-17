// https://codeforces.com/contest/224/problem/A
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
	int a,b,c;cin>>a>>b>>c;
	int z = sqrt((b*c)/a), y = b/z, x = a/y;
	cout << 4*x+4*y+4*z << endl;
	exit(0);
}
