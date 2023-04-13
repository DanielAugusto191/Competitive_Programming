// https://codeforces.com/contest/1676/problem/G
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
const int MAX = 4000;
vector<int> G[MAX];
int ans = 0;
string s;
pii dp(int i){
	pii bw = {0,0};
	for(auto &e: G[i]) {
		pii lans = dp(e);
		bw.first += lans.first;
		bw.second += lans.second;
	}
	if(s[i] == 'B') bw.first++;
	else bw.second++;
	if(bw.first == bw.second) ans++;
	return bw;
}	

int main(){_
	int t;cin>>t;
	while(t--){
		ans = 0;
		int n;cin >> n;
		for(int i=0;i<n;++i) G[i].clear();
		for(int i=0;i<n-1;++i){
			int a;cin>>a;a--;
			G[a].push_back(i+1);
		}
		cin >> s; 
		dp(0);
		cout << ans << endl;
	}
	exit(0);
}