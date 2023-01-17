// https://codeforces.com/problemset/problem/478/B
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
	ll n,m;cin>>n>>m;

	ll kmax, kmin;

	kmax = ((n-(m-1)-1) * ((n-(m-1)-1)+1)) / 2;
	
	kmin = (((n/m)*1LL * (n/m + 1)*1LL / 2*1LL) * (n%m))*1LL + (m-(n%m))*1LL * (((n/m-1)*1LL * (n/m)*1LL)*1LL / 2*1LL);

	cout << kmin << ' ' << kmax << endl;
	exit(0);
}
