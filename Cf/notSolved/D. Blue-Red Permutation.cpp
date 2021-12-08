// https://codeforces.com/contest/1607/problem/D
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
		int n;cin>>n;
		int arr[n];for(auto &e: arr) cin >> e;
		string s;cin>>s;
		vector<pair<int,int> > v(n);
		for(int i=0;i<n;++i) v[i] = (s[i] == 'R') ? make_pair(arr[i], n) : make_pair(1, arr[i]);
		sort(v.begin(), v.end(), [&](pair<int,int> a, pair<int,int> b){return a.second-a.first+1 < b.second-b.first+1;});
		for(int i=1;i<=n;++i){
			
		}
		for(auto e: v){
			cout << '[' << e.first << ' ' << e.second << ']' << endl;
		}

	}
	exit(0);
}

// [1,1]
// [2,4]
// [2,4]
// [1,5]
