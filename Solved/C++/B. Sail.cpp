// https://codeforces.com/contest/298/problem/B
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
	int t,x1,x2,y1,y2,dx,dy;cin>>t>>x1>>y1>>x2>>y2;dx=x2-x1;dy=y2-y1;
	string s;cin>>s;
	int ans = 0;
	for(char &c: s){
		if(dx < 0){
			if(c == 'W') ++dx;
		}else if(dx > 0) if(c == 'E') --dx;
		if(dy < 0){
			if(c == 'S') ++dy;
		}else if(dy > 0) if(c == 'N') --dy;
		++ans;
		if(dx == 0 && dy == 0) break;
	}
	if(dx == 0 && dy == 0) cout << ans << endl; else cout << -1 << endl;

	exit(0);
}
