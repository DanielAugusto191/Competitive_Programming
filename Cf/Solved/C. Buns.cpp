// https://codeforces.com/contest/106/problem/C 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n,m,c0,d0;
vector<vector<int> > v, memo;
int dp(int i, int w){
	if(w <= 0 || i > m) return 0;
	if(memo[i][w] != -1) return memo[i][w];
	int k = min(v[i][0]/v[i][1], w/v[i][2]);
	int ans = 0;
	for(int j=0;j<k;++j) ans = max(ans, (j+1)*v[i][3] + dp(i+1, w-(j+1)*v[i][2]));
	return memo[i][w] = max(dp(i+1, w), ans);
}

int main(){_
	cin >> n >> m >> c0 >> d0;
	
	v.resize(m+1, vector<int>(5));
	memo.resize(m+1, vector<int>(n+1, -1));
	for(int i=0;i<m;++i) {
		cin >> v[i][0] >> v[i][1] >> v[i][2] >> v[i][3];
		v[i][4] = min(v[i][0]/v[i][1], n/v[i][2]) * v[i][3];
	}
	v[m][0] = INF, v[m][1] = 1, v[m][2] = c0, v[m][3] = d0, v[m][4] = min(v[m][0]/v[m][1], n/v[m][2])*v[m][3];
	sort(v.begin(), v.end(), [&](vector<int> a, vector<int> b){return a[4] > b[4];});
	int ans = dp(0, n);
	cout << ans << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

