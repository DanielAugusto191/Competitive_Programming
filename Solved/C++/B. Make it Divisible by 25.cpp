// https://codeforces.com/contest/1593/problem/B
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
		string s; cin >> s;
		int n = (int)s.size();
		int ans = INF;
		int k = 0;
		for(int i=n-1;i>=0;--i){
			if(s[i] != '0' && s[i] != '5'){
				k++;
				continue;
			}
			if(s[i] == '0'){
				int l = 0;
				for(int j=i-1;j>=0;--j){
					if(s[j] == '0' || s[j] == '5') break;
					l++;
				}
				ans = min(ans, k+l);
			}
			if(s[i] == '5'){
				int l = 0;
				for(int j=i-1;j>=0;--j){
					if(s[j] == '2' || s[j] == '7') break;
					l++;
				}
				ans = min(ans, k+l);
			}
			k++;
		}	
		cout << ans << endl;


	}
	exit(0);
}
