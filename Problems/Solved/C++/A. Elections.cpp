// https://codeforces.com/contest/1593/problem/A
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
	int a,b,c;cin>>a>>b>>c;
	cout << max(0, (max(b,c)+1 - a)) << ' ' << max(0, max(a,c)+1 - b) << ' ' << max(0, max(a,b)+1 - c) << endl; 
	}
	exit(0);
}
