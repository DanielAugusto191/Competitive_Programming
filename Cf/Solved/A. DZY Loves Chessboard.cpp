// https://codeforces.com/contest/445/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int n,m;
vector<vector<char> > arr;
vector<vector<bool> > vis;
char let[2] = {'B', 'W'};
void dfs(pair<int,int> p, bool c){
	if(vis[p.first][p.second]) return;
	arr[p.first][p.second] = let[c];
	vis[p.first][p.second] = 1;
	if(p.first-1 >= 0 && !vis[p.first-1][p.second] && arr[p.first-1][p.second] != '-') dfs({p.first-1, p.second}, !c);
	if(p.first+1 < n && !vis[p.first+1][p.second] && arr[p.first+1][p.second] != '-') dfs({p.first+1, p.second}, !c);
	if(p.second-1 >= 0 && !vis[p.first][p.second-1] && arr[p.first][p.second-1] != '-') dfs({p.first, p.second-1}, !c);
	if(p.second+1 < m && !vis[p.first][p.second+1] && arr[p.first][p.second+1] != '-') dfs({p.first, p.second+1}, !c);
}
int main(){_
	cin>>n>>m;
	arr.resize(n, vector<char>(m));
	vis.resize(n, vector<bool>(m, 0));
	for(int i=0;i<n;++i) for(int j=0;j<m;++j) cin >> arr[i][j];
	for(int i=0;i<n;++i) for(int j=0;j<m;++j) if(arr[i][j] != '-') dfs({i,j}, 'B');
	for(int i=0;i<n;++i) {
		for(int j=0;j<m;++j) cout << arr[i][j];
		cout << endl;
	}
	exit(0);
}
