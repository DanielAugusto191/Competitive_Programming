// https://codeforces.com/contest/165/problem/A
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
	int n;cin>>n;
	if(n<5){
		cout << 0 << endl; exit(0);
	}
	vector<pair< pair<int, int>, int> > v(n);
	for(int i=0;i<n;++i){
		int x,y;cin>>x>>y;
		v[i] = {{x,y}, 0};
	}
	sort(v.begin(), v.end(), [&](auto a, auto b){
		if(a.first.first == b.first.first) return a.first.second < b.first.second;
		else return a.first.first < b.first.first;
	});
	for(int i=1;i<n;++i){
		if(v[i].first.first == v[i-1].first.first) v[i].second++;
		else v[i-1].second--;
	}
	v[n-1].second--;
	sort(v.begin(), v.end(), [&](auto a, auto b){
		if(a.first.second == b.first.second) return a.first.first < b.first.first;
		else return a.first.second < b.first.second;
	});
	for(int i=1;i<n;++i){
		if(v[i].first.second == v[i-1].first.second) v[i].second++;
		else v[i-1].second--;
	}
	v[n-1].second--;
	int ans = 0;
	for(int i=0;i<n;++i) if(v[i].second == 2) ans++;
	cout << ans << endl;
	exit(0);
}