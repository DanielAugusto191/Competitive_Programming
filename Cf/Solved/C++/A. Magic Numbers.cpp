// https://codeforces.com/problemset/problem/320/A
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
	string n;cin>>n;
	int s = n.size();
	if(n[0] != '1'){
		cout << "NO" << endl;
		exit(0);
	}
	int c = 0;
	for(int i=1;i<s;++i){
		if(n[i] != '1' && n[i] != '4'){
			cout << "NO" << endl;
			exit(0);
		}
		if(n[i] == '1') c = 0;
		else c++;

		if(c == 3){
			cout << "NO" << endl;
			exit(0);
		}
	}
	cout << "YES" << endl;
	exit(0);
}
