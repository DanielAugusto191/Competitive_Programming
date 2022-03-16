// https://codeforces.com/problemset/problem/431/B
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
	vector<int> v({0,1,2,3,4});
	int M[5][5];
	int ans = -1;
	for(int i=0;i<5;++i) for(int j=0;j<5;++j) cin >> M[i][j];
	do{
		int m =0;
		m += M[v[0]][v[1]] + M[v[1]][v[0]];
		m += M[v[2]][v[3]] + M[v[3]][v[2]];

		m += M[v[1]][v[2]] + M[v[2]][v[1]];
		m += M[v[3]][v[4]] + M[v[4]][v[3]];
		
		m += M[v[2]][v[3]] + M[v[3]][v[2]];

		m += M[v[3]][v[4]] + M[v[4]][v[3]];
		ans = max(ans, m);
		// 0 1 2 3
		// 1 2 3 4
		// 2 3
		// 3 4
	}while(next_permutation(v.begin(), v.end()));
	cout << ans << endl;

	exit(0);
}
