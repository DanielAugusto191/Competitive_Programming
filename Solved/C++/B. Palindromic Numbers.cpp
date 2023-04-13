// https://codeforces.com/problemset/problem/1700/B
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
const int MAX = 1e5 + 10;
int ans[MAX];

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s;cin>>s;
		if(s[0] != '9') {
			for(int i=0;i<n;++i) ans[i] = 9 - (s[i]-'0');
		}else{
			int c = 1;
			for(int i=n-1;i>=0;--i){
				if((s[i]-'0') > c){
					c += 10;
					ans[i] = c-(s[i]-'0');
					c = 0;
				}else{
					ans[i] = c-(s[i]-'0');
					c = 1;
				}
			}
		}
		for(int i=0;i<n;++i) cout << ans[i];
		cout << endl;
	}
	exit(0);
}