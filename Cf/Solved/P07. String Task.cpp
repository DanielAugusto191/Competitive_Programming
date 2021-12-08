// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P07
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<char> VOG = {'a', 'o', 'y', 'e', 'u', 'i'};

int main(){_
	string s;cin>>s;
	int n;n = s.size();
	for(int i=0;i<n;++i){
		if(s[i] < 97) s[i]+=32;
		bool v = 0;
		for(auto &e: VOG){
			if(s[i] == e){v = 1; break;}
		}
		if(v) continue;
		cout << '.' << s[i];
	}
	cout << endl;
	exit(0);
}
