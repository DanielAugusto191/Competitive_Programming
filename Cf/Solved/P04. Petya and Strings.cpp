// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P04
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
	string s1,s2;cin>>s1>>s2;
	int n = s1.size();
	int ans = 0;
	for(int i=0;i<n;++i){
		if(s1[i] < 97) s1[i] = s1[i]+32;
		if(s2[i] < 97) s2[i] = s2[i]+32;
		if(s1[i] < s2[i]) {ans = -1; break;}
		else if(s2[i] < s1[i]) {ans = 1; break;}
	}
	cout << ans << endl;
	exit(0);
}
