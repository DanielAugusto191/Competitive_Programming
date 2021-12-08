// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P08
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
	int n,l,a;cin>>n>>l>>a;
	vector<pair<int,int> > v;
	v.push_back({0,0});
	int ans = 0;
	for(int i=0;i<n;++i){
		int x,y;cin>>x>>y;
		v.push_back({x,y});
	}
	v.push_back({l, 0});
	int k = v.size();
	for(int i=1;i<k;++i){
		int p = v[i].first - (v[i-1].first+v[i-1].second);
		ans += p/a;
	}
	cout << ans << endl;
	exit(0);
}