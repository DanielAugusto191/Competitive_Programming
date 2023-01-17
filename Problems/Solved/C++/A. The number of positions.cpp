// https://codeforces.com/contest/124/problem/A
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
	int n,a,b;cin>>n>>a>>b;
	int pos = n-b;
	if(pos-1 < a) pos = a+1;
	cout << n-pos+1 << endl;
	exit(0);
}