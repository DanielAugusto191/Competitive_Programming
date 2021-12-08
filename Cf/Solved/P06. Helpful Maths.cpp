// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P06
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
	string s;cin>>s;
	int n; n = s.size();
	vector<char> v;
	for(int i=0;i<n;i+=2) v.push_back(s[i]);
	sort(v.begin(),v.end());
	n = v.size();
	for(int i=0;i<n;++i){
		cout << v[i];
		if(i != n-1) cout << '+';
		else cout << endl;
	}
	exit(0);
}
