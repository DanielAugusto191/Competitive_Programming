// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P09
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
	string s;cin >> s;
	pair<int,int> d8 = {0,0};
	for(int i=0;i<n;++i) if(s[i] == '8') ++d8.first; else ++d8.second;
	int ans = 0;
	ans = min(d8.first , d8.second/10);
	d8.first -= ans;
	int k = d8.second%10;
	if(d8.first > (10-k)){
		d8.first -= (10-k)+1;
		++ans;
		k = 0;
	}
	ans += d8.first / 11;
	cout << ans << endl;

	exit(0);
}
