// https://codeforces.com/contest/1203/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 4e5 + 10;

ll arr[MAX];

int main(){_
	int n;cin>>n;
	cin >> arr[0];
	ll g = arr[0];
	for(int i=1;i<n;++i){
		cin >> arr[i];
		g = __gcd(g, arr[i]);
	}
	int l = sqrt(g);
	if(g == 1) cout << 1 << endl;
	else{
		int c = 2;
		for(int i=2; i<l+1; i++) if(g % i == 0)c += (g/i == i) ? 1 : 2;
		cout << c << endl;
	}
	exit(0);
}
