// https://codeforces.com/contest/352/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	unordered_map<int,int> m;
	for(int i=0;i<n;++i){
		int x;cin>>x;
		m[x]++;
	}
	if(m[0] == 0){
		cout << -1 << endl;
		exit(0);
	}
	int k = m[5]/9;
	string ans = "";
	for(int i=0;i<k;++i) ans += "555555555";
	if(ans == "") ans = "0";
	else for(int i=0;i<m[0];++i) ans += "0";
	cout << ans << endl;

	exit(0);
}
