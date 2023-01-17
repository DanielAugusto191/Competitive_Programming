// https://codeforces.com/problemset/problem/1766/C
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
const int MAX = 2e5+10;

int n;
char arr[2][MAX];
bool memo[2][MAX];
bool vis[2][MAX];
pii dx[3] = {{1, 0}, {-1, 0}, {0, 1}};
bool dp(int i,int j){
	if(memo[i][j]) return memo[i][j];
	if(arr[i][j] == 'W') return false;
	vis[i][j] = true;
	bool ans = false;
	for (auto &e: dx) if(e.first+i >=0 && e.first+i < 2 && !vis[e.first+i][e.second+j]) {
		if(e.second+j == n) ans =true;
		else{
			if(arr[e.first+i][e.second+j] == 'B'){ 
				if(dp(e.first+i, e.second+j) == 0){
					ans = false; break;
				} else{
					
				}
		}
	}
	return memo[i][j] = ans;
}

int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;++i) cin >> arr[0][i];
		for(int i=0;i<n;++i) cin >> arr[1][i];
		cout << ((dp(0, 0) || dp(1, 0))?"YES":"NO") << endl;
		for(int i=0;i<n;++i) cout << vis[0][i];
		cout << endl;
		for(int i=0;i<n;++i) cout << vis[1][i];
		cout << endl;
	}
	/*
	BWBWBBWBWB
	BBBBBBBBBB 
	BWBWBBWBWB
	BBBBBBBBBB
	 * */
	exit(0);
}
