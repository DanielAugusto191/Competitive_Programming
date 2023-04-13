// https://codeforces.com/problemset/problem/479/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 2e5 + 10;

int main(){_
	int n;cin>>n;
	vector<pii> v;
	for(int i=0;i<n;++i){
		int a,b;cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end(), [&](pii a, pii b) {
		if(a.first == b.first) return a.second < b.second;
		return a.first < b.first;
	});
	int ans = 0;
	for(int i=0;i<n;++i){
		if(v[i].second >= ans) ans = v[i].second;
		else ans = v[i].first;
	}
	cout << ans << endl;
	exit(0);
}