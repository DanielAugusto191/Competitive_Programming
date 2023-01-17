// https://atcoder.jp/contests/dp/tasks/dp_b
#include <bits/stdc++.h>
#define endl '\n'
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 1e5 + 10;
int main(){_
	int n,k;cin>>n>>k;
	vector<int> v(n), memo(n);
	for(auto& e: v) cin >> e;
	memo[0] = 0;
	for(int i=1;i<n;++i){
		memo[i] = INF;
		for(int j=max(0, i-k); j < i; ++j){
			memo[i] = min(memo[i], memo[j] + abs(v[j]-v[i]));
		}
	}
	cout << memo[n-1] << endl;
	exit(0);
}
