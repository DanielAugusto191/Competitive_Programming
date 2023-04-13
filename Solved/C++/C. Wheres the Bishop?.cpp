// https://codeforces.com/contest/1692/problem/C
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

int main(){_
	int t;cin>>t;
	char arr[8][8];
	while(t--){
		string k;
		getline(cin, k);
		for(int i=0;i<8;++i) for(int j=0;j<8;++j) cin >> arr[i][j];
		pii ans = {-1,-1};
		for(int i=1;i<7;++i){
			for(int j=1;j<7;++j){
				if(arr[i][j] == '#' && arr[i-1][j-1] == '#' && arr[i-1][j+1] == '#' && arr[i+1][j-1] == '#' && arr[i+1][j+1] == '#'){
					ans.first = i+1;
					ans.second = j+1;
					break;
				}
			}
			if(ans.first != -1) break;
		}
		cout << ans.first << ' ' << ans.second << endl;

	}
	exit(0);
}