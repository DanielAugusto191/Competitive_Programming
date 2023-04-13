// https://codeforces.com/contest/1806/problem/B
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

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int z=0,nz=0, c=0;
		for(int i=0;i<n;++i){
			int a;cin>>a;
			if(a == 0) z++;
			else if(a == 1) c++;
			else nz++;
		}
		if(z <= c+nz+1) cout << 0 << endl;
		else if(!c || nz) cout << 1 << endl;
		else cout << 2 << endl;

	}
	exit(0);
}
/*

*/
