// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P03
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
		string s;cin>>s;
		if(s.size() > 10){
			string ans = "";
			ans += s[0];
			ans += to_string(s.size()-2);
			ans += s[s.size()-1];
			s = ans;
		}
		cout << s << endl;
	}
	exit(0);
}