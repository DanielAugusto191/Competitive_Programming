// https://codeforces.com/contest/276/problem/B
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
	vector<int> arr(26);
	string s;cin>>s;
	for(char &e: s) ++arr[e-'a'];
	int ni = 0;
	for(auto &e: arr) if(e & 1) ++ni;
	if(ni <= 1 || ni & 1) cout << "First" << endl;
	else cout << "Second" << endl;
	exit(0);
}
