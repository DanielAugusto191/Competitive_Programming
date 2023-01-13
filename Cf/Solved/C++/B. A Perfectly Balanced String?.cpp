// https://codeforces.com/problemset/problem/1673/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n = s.size(), l = -1;
		map<char,int> m;
		for(int i=0;i<n;++i){
			if(!m[s[i]]) ++m[s[i]];
			else {
				l = i;
				break;
			}
		}
		if(l == -1) {cout << "YES" << endl; continue;}
		int k = 0;
		int ans = 1;
		for(int i=l;i<n;++i){
			if(!(s[i] == s[k])){ans =0;break;}
			k = (k+1)%l;
		}
		cout << (ans?"YES":"NO") << endl;
	}
	exit(0);
}
/*

*/
