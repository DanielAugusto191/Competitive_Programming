// https://codeforces.com/contest/1729/problem/B
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
		list<char> ans;
		for(int i=n-1;i>=0;--i){
			if(s[i] == '0'){
				int k = s[i-1]-'0';
				k += (s[i-2]-'0')*10;
				i -= 2;
				ans.push_front(k+96);
			}else ans.push_front((s[i]-'0')+96);
		}
		for(auto &e: ans) cout << e;
		cout << endl;
	}
	exit(0);
}