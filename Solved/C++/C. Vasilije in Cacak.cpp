// https://codeforces.com/contest/1878/problem/C
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
		ll n,k,x;cin>>n>>k>>x;
		ll minX = k*(k+1)/2, maxX = ((n*(n+1)/2) - ((n-k)*(n-k+1)/2));
		cout << ((x < minX || x > maxX)?"NO":"YES") << endl;
	}
	exit(0);
}
/*
1+2+3...+(k-1) + Y = X

9 6 40
21



1+2+5 = 8 
1+3+4 = 8

2 1 26

5 3 10
1 3 5 = 10


a0+a1+...+ak-1+ ak = X
ai != aj \forall ij
1 <=ai <=n

n-k + n-k+1 ... + n-k+k

2n-k

(k+1) * (n-k+n)/2
(n+n-k+1) * (n-k+1-n+1)/2
k*(k+1)/2 <= x <= (2n-k)*()/2
*/
