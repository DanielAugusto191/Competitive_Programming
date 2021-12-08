// https://codeforces.com/contest/205/problem/A
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
	int n;cin>>n;
	int mm = INF, ans = -1;
	unordered_map<int,int> m;
	for(int i=0;i<n;++i){
		int x;cin>>x;
		m[x]++;
		if(x < mm){
			mm = x;
			ans = i;
		}
	}
	if(m[mm] > 1) cout << "Still Rozdil" << endl;
	else cout << ans+1 << endl;
	exit(0);
}
