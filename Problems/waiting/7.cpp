// 
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
const int MOD = (int)1e9 + 7;
const int MAX = 1e9;

int n,x,y,x2,y2;

int f(int k, int p){
	int l=1, r = n/2+1;
		while(l+1 < r){
			int m = (l+r)/2;
			if(k >= m && k <= (n-(m-1)) && p >= m && p <= (n-(m-1))) l = m;
			else r = m;
		}
		return l;
}

int main(){_
	int t;cin>>t;
	while(t--){
		cin >> n >> x >> y >> x2 >> y2;
		int pi = f(x, y), ei = f(x2, y2);
		cout << abs(pi-ei) << endl;
	}
	exit(0);
}
/*
	max n/2+1
*/
