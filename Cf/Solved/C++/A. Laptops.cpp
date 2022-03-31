// https://codeforces.com/problemset/problem/456/A
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
	int n;cin>>n;
	vector<pair<int, int> > v(n);
	for(int i=0;i<n;++i){
		cin >> v[i].first >> v[i].second;
	} 
	sort(v.begin(), v.end(), [&](pair<int,int> a, pair<int,int> b){
		return a.second > b.second;	
	});
	int ans = 0;
	for(int i=1;i<n;i++){
		if(v[i].first > v[i-1].first && v[i].second < v[i-1].second){
			ans = 1;
			break;
		}
	}
	cout << (ans ? "Happy Alex" : "Poor Alex") << endl;
	exit(0);
}
