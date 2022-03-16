// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P11
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
vector<pair<int,int > > v;
int n,q;
bool ans;
int f(int x, int y){
	for(pair<int,int> &e: v){
		if(e.first == x) return 0;
		if(e.second == y) return 0;
		if(abs(e.first-x) == abs(e.second-y)) return 0;
	}
	return 1;
}
int main(){_
	cin>>n>>q;
	while(q--){
		int x,y;cin>>x>>y;--x;--y;
		if(f(x,y)){
			v.push_back({x,y});
			cout << "YES" << endl;
 		}else cout << "NO" << endl;
	}
	exit(0);
}
