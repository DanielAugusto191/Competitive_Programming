// https://codeforces.com/contest/1729/problem/C
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
		int n; n = s.size();
		int cost = abs((s[0]-'0') - (s[n-1]-'0'));
		map<char,vector<int> > m;
		for(int i=1;i<n-1;++i) m[s[i]].push_back(i+1);
		int inv = 0;
		if(s[0] > s[n-1]) swap(s[0], s[n-1]), inv=1;
		vector<int> path;
		for(auto &e: m){
			if(e.first >= s[0] && e.first <= s[n-1]){
				for(auto &l: e.second) path.push_back(l);
			}
		}
		if(inv) reverse(path.begin(), path.end());

		cout << cost << ' ' << path.size()+2 << endl;
		cout << 1 << ' ';
		for(int &e: path) cout << e << ' ';
		cout << n << endl;
	}
	exit(0);
} // 5 + 2 + 6
