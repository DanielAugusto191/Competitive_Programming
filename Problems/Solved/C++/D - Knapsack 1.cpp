// https://atcoder.jp/contests/dp/tasks/dp_d
#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e5+10;
ll memo[110][MAX], W[110], V[110];
int n,w;
ll pd(int i, int j){
	if(j < 0) return -LINF;
	if(i == n) return 0;
	ll& p = memo[i][j];
	if(p != -1) return p;
	return p = max(pd(i+1, j), pd(i+1, j-W[i]) + V[i]);
}

int main(){_
	cin>>n>>w;
	for(int i=0;i<n;++i){
			cin >> W[i] >> V[i];
	}
	memset(memo, -1, sizeof memo);
	cout << pd(0,w) << endl;
	exit(0);
}
