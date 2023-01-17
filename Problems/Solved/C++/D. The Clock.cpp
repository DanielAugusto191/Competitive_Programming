// https://codeforces.com/contest/1692/problem/D
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		string s,k;cin>>s>>k;
		int ki = stoi(k);
		int h = ki/60;
		int m = ki%60;
		string o = "";
		o += s[0];
		o += s[1];
		int shi = stoi(o);
		o = "";
		o += s[3];
		o += s[4];
		int smi = stoi(o);
		int ans = 0;
		string l = "";
		while(l != s){
			int p = 0;
			if(smi+m >= 60) p = 1;
			smi = (smi+m)%60;
			shi = (shi+h+p)%24;
			l = "";
			if(shi < 10) l = "0";
			l += to_string(shi) + ":";
			if(smi < 10) l += "0";
			l += to_string(smi);
			if(l[0]==l[4] && l[1]==l[3]){
				ans++;
			}
		}
		cout << ans << endl;

	}
	exit(0);
}