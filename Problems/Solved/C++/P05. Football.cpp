// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P05
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
	string s;cin>>s;
	int n;n = s.size();
	int c = 1;
	string ans = "NO";
	for(int i=1;i<n;++i){
		if(s[i] == s[i-1]) c++;
		else c = 1;
		if(c == 7) {ans = "YES"; break;}
	}
	cout << ans << endl;
	exit(0);
}
