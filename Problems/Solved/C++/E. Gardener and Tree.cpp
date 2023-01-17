// https://codeforces.com/contest/1593/problem/E
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
		string s;getline(cin, s);
		int n,k;cin>>n>>k;
		if(n==1){
			cout << 0 << endl;
			continue;
		}
		vector<int> grau(n, 0);
		vector<vector<int> > G(n);
		for(int i=0;i<n-1;++i){
			int x,y;cin>>x>>y;--x;--y;
			G[x].push_back(y);
			G[y].push_back(x);
			++grau[x];
			++grau[y];
		}
		vector<int> g1,g2;
		int ans = 0;
		for(int i=0;i<n;++i) if(grau[i] == 1) g1.push_back(i);
		for(int p=0;p<k && (int)g1.size();++p){
			ans += (int)g1.size();
			for(int &e: g1){
				for(int &x: G[e]) {
					grau[x]--;
					if(grau[x] == 1) g2.push_back(x);
				}
				grau[e] = -50;
			}
			g1.clear();
			g1 = g2;
			g2.clear();
		}
		cout << n-ans << endl;

	}
	exit(0);
}
