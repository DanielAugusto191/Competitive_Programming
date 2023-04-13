// https://codeforces.com/problemset/problem/1360/E
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
const int MAX = 1e9;

string arr[50];

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;++i) cin >> arr[i];
		--n;
		bool ans = 1;
		auto a = [&](){
			for(int i=0;i<n;++i) for(int j=0;j<n;++j) if(arr[i][j] == '1' && arr[i+1][j] != '1' && arr[i][j+1] != '1') {ans = 0;return;}
		};
		a();
		cout << (ans?"YES":"NO") << endl;
	}
	exit(0);
}
