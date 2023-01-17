// https://codeforces.com/contest/1783/problem/B
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
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int ans[n][n];
		int x = 1, y = n*n, k = 1;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				if(k) ans[i][j] = x++;
				else ans[i][j] = y--;
				k = !k;
			}
			if(i%2) reverse(ans[i], ans[i]+n);
		}
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j) cout << ans[i][j] << ' ';
			cout << endl;
		}

	}
	exit(0);
}
/*
1 2 3 4 5 6 7 8 9
1-9, 2-8, 3-7, 4-6, 5
1-9, 2-8
3 7, 4-6
5

1 9 2
8 3 7
4 6 5

1 9 2
7 3 8
4 6 5

6 8 6 7 6 3 4 3 5 3 2 1
1 2 3 4 5 6 7 8

8 2 1 1 3 4 7 6 5 1 3 2
1 2 3 4 5 6 7 8

*/
