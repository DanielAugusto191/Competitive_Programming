// https://codeforces.com/contest/1579/problem/E1
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 2e5 + 10;
int v[MAX];
int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		deque<int> d;
		for(int i=0;i<n;++i) cin >> v[i];
		d.push_back(v[0]);
		for(int i=1;i<n;++i) if(v[i] < d.front()) d.push_front(v[i]); else d.push_back(v[i]);
		for(int &e: d) cout << e << ' ';
		cout << endl;
	}
	exit(0);
}
