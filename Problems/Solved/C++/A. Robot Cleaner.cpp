// https://codeforces.com/contest/1623/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int n,m,rb,cb,rd,cd;

bool check(){
	return (rb == rd) || (cb == cd);
}

int main(){_
	int t;cin>>t;
	while(t--){
		cin>>n>>m>>rb>>cb>>rd>>cd;
		int dr = 1, dc = 1;
		int ans = 0;
		while(!check()){
			if(rb+1 > n) dr *= -1; 
			if(cb+1 > m) dc *= -1;
			cb+=dc;
			rb+=dr;
			++ans;
		}
		cout << ans << endl;
	}
	

	exit(0);
}
