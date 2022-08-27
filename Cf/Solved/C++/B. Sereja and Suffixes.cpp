// https://codeforces.com/problemset/problem/368/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int n,m;cin>>n>>m;
	map<int,bool> mm;
	int arr[n], ans[n]; for(auto &e: arr) cin >> e;
	mm[arr[n-1]] = 1;
	ans[n-1] = 1;
	for(int i=n-2;i>=0;--i){
		if(mm[arr[i]] == 0){
			mm[arr[i]] = 1;
			ans[i] = ans[i+1]+1;
		}else ans[i] = ans[i+1];
	}
	for(int i=0;i<m;++i){
		int a;cin>>a;a--;
		cout << ans[a] << endl;
	}
	exit(0);
}
