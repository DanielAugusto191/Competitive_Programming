// https://projecteuler.net/problem=18
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
	string f = "75\n95 64\n17 47 82\n18 35 87 10\n20 04 82 47 65\n19 01 23 75 03 34\n88 02 77 73 07 63 67\n99 65 04 28 06 16 70 92\n41 41 26 56 83 40 80 70 33\n41 48 72 33 47 32 37 16 94 29\n53 71 44 65 25 43 91 52 97 51 14\n70 11 33 28 77 73 17 78 39 68 17 57\n91 71 52 38 17 14 91 43 58 50 27 29 48\n63 66 04 68 89 53 67 30 73 16 69 87 40 31\n04 62 98 27 23 09 70 98 73 93 38 53 60 04 23";
	stringstream ff(f); 
	string s;
	while(getline(ff,s)){
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