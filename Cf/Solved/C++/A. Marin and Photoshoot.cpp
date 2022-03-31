// https://codeforces.com/contest/1658/problem/A
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
		int n;cin>>n;
		string s;cin>>s;
		int k = 0, ans = 0;
		int l = s.size();
		int p = 0;
		while(s[p] == '1') p++;
		for(int i=p+1;i<l;++i) if(s[i] == '0') ans += max(2-k, 0), k = 0; else k++;
		cout << ans << endl;
	}
	exit(0);
}
