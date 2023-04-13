// https://projecteuler.net/problem=67
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
const int MAX = 1e5;
const int MAXSIZE = 100;

int lines;
vector<int> m[MAXSIZE];
int dp[MAXSIZE][MAXSIZE];
int solve(int i, int j){
	if(i >= lines) return 0;
	auto &k = dp[i][j];
	if(k != -1) return dp[i][j];
	return k = m[i][j] + max(solve(i+1, j), solve(i+1, j+1));
}
int main(){_
	memset(dp, -1, sizeof dp);
	fstream f;
	f.open("triangle.txt");
	string s;
	while(getline(f,s)){
		string split;
		for(char e: s){
			if(e == ' ') m[lines].push_back(stoi(split)), split = "";		
			split += e;
		}
		if(split != " ") m[lines].push_back(stoi(split));
		++lines;
	}
	cout << solve(0, 0) << endl;
	exit(0);
}