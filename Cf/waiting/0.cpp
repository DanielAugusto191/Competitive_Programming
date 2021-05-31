// https://codeforces.com/problemset/problem/118/D 
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

int n,m,k1,k2;
vector<vector<vector<vector<int> > > > memo;
int dp(int i, int t1, int t2, int f ,int h){
	if(f < 0 || h < 0) return 0;
	if(i == n+m) return 1;
	auto &p = memo[t1][t2][f][h];
	if(t1 == 0) if(p == -1) return p = dp(i+1, t1, t2-1, k1, h-1); else return p;
	else if(t2 == 0) if(p == -1)return p = dp(i+1, t1-1, t2, f-1, k2); else return p;
	else if(p == -1) return p = dp(i+1, t1-1, t2, f-1, k2) + dp(i+1, t1, t2-1, k1, h-1); else return p;
}

int main(){_
	cin >> n >> m >> k1 >> k2;
	memo.resize(n+1, vector<int>(m+1, vector<int>(k1+1, vector<int>(k2+1, -1))));
	cout <<  dp(0, n, m, k1, k2) << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

