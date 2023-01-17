// https://codeforces.com/problemset/problem/514/B
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
const int MAX = 1e3;

int main(){_
	int n,x0,y0;cin>>n>>x0>>y0;
	queue<pii> q;
	for(int i=0;i<n;++i) {
		int a,b;cin>>a>>b;
		q.push({a,b});
	}
	q.push({INF, INF});
	int ans = 0;
	while(q.front().first != INF){
		pii k = q.front(); q.pop();
		++ans;
		pii p = q.front();
		while(p.first != INF) {
			q.pop();
			int at = abs((x0*k.second + y0*p.first + k.first * p.second) - (k.second*p.first + x0*p.second + y0*k.first));
			if(at != 0) q.push(p);
			p = q.front();
		}
		q.pop();
		q.push(p);
	}
	cout << ans << endl;

	exit(0);
}
