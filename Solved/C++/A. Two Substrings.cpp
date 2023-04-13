// https://codeforces.com/problemset/problem/550/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

string s;
int n, ans;
vector<int> arr;
vector<pii> ba;

bool f(){
	for(auto &e: ba) if(!arr[e.first] && !arr[e.second]) return 1;
	return 0;
}

int main(){_
	cin>>s;
	n = (int)s.size();
	arr.resize(n, 0);
	ans = 0;
	for(int i=1;i<n;++i) if(s[i] == 'A' && s[i-1] == 'B') ba.push_back({i, i-1});
	if(ba.size() == 0) {cout << "NO" << endl;return 0;}
	for(int i=1;i<n;++i){
		if(s[i] == 'B' && s[i-1] == 'A'){
			arr[i] = arr[i-1] = 1;
			if(f()){
				ans = 2;
				break;
			}
			arr[i] = arr[i-1] = 0;
		}
	}
	
	cout << ((ans == 2) ?"YES":"NO") << endl; 

	exit(0);
}
