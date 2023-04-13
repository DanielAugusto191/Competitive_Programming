// https://codeforces.com/contest/1660/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		vector<bool> v(26, false);
		int ans = 0;
		for(auto &e: s){
			if(v[e - 'a']){
				ans += 2;
				fill(v.begin(),v.end(), false);
			}else v[e - 'a'] = true;
		} 
		cout << (int)s.size() - ans << endl;
	}	
	exit(0);
} // a