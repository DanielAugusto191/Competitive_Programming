// https://codeforces.com/gym/307122/problem/A
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
	int n;cin >> n;
	string ans;
	string x = "aabb";
	int k = n/4;
	for(int i=0;i<k;++i) ans += x;
	k = k*4;
	for(int i=0;i<n-k;++i) ans += x[i];
	cout << ans << endl;

	exit(0);
}
/*
Strictly lenght 3
aabbaabbaabb
bbaac
bcaabb
aabbcaabbc
AABBC
*/
