// https://codeforces.com/contest/1611/problem/A
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
		int n = (int)s.size();
		if((s[n-1]-'0')%2 == 0) cout << 0 << endl;
		else if((s[0]-'0')%2 == 0) cout << 1 << endl;
		else{
			int p = 0;
			for(char &e: s) if((e-'0')%2==0) {p = 1; break;}
			if(!p) cout << -1 << endl;
			else cout << 2 << endl;
		}
	}
	exit(0);
}
