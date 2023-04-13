// https://codeforces.com/contest/1647/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

char arr[110][110];
vector<pair<ii, ii> > v;

void solve(){
	int n,m;cin>>n>>m;
	v.clear();
	for(int i=0;i<n;++i) for(int j=0;j<m;++j) cin >> arr[i][j];
	if(arr[0][0] == '1'){
		cout << -1 << endl;
		return;
	}
	for(int i=n-1;i>0;--i){
		for(int j=m-1;j>0;--j){
			if(arr[i][j] == '1'){
				v.push_back({make_pair(i, j-1), make_pair(i, j)});
			}
		}
	}
	for(int i=n-1;i>0;--i){
		if(arr[i][0] == '1'){
			v.push_back({make_pair(i-1, 0), make_pair(i, 0)});
		}
	}
	for(int i=m-1;i>0;--i){
		if(arr[0][i] == '1'){
			v.push_back({make_pair(0, i-1), make_pair(0, i)});
		}
	}
	cout << v.size() << endl;
	for(auto &e: v) cout << e.first.first+1 << ' ' << e.first.second+1 << ' ' << e.second.first+1 << ' ' << e.second.second+1 << endl;
}

int main(){_
	int t;cin>>t;
	while(t--){
		solve();
	}
	exit(0);
}
