// https://codeforces.com/contest/1690/problem/A
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
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int l = 2,r = n-3;
		while(l+1 < r){
			int m = (l+r)/2;
			if((n-m)/2+1 < m && (n-m)/2-!((n-m)%2) > 0) r = m;
			else l = m;
		}
		cout << (n-r)/2+1 << ' ' << r << ' ' << (n-r)/2-!((n-r)%2) << endl;
	}
	exit(0);
}
