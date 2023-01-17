// https://codeforces.com/contest/450/problem/A
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
	queue<pair<int, int > > q;
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;++i){
		int x;cin>>x;
		q.push({i, x});
	}
	while(q.size() > 1){
		if(q.front().second-m <= 0) q.pop();
		else{
			q.front().second -= m;
			q.push(q.front());
			q.pop();
		}
	}
	cout << q.front().first << endl;
	exit(0);
}