// https://codeforces.com/contest/352/problem/B
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
	map<int,vector<int> > m;
	for(int i=0;i<n;++i){
		int x;cin>>x;
		m[x].push_back(i);
	}
	vector<pair<int,int> > v;
	for(auto &e: m){
		if(e.second.size() == 1) v.push_back({e.first, 0});
		else if(e.second.size() == 2) v.push_back({e.first, e.second[1]-e.second[0]});
		else{
			int l = e.second[1]-e.second[0];
			int x = e.second.size();
			int ans = 1;
			for(int i=2;i<x && ans;++i) ans &= (e.second[i]-e.second[i-1] == l);
			if(ans) v.push_back({e.first, l});
		}
	}
	cout << v.size() << endl;
	for(auto &e: v) cout << e.first << ' ' << e.second << endl;
	exit(0);
}
