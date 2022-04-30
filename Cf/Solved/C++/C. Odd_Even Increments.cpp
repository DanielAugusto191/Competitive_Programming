// https://codeforces.com/contest/1669/problem/C
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
	int t;cin >> t;
	while(t--){
		int n;cin >> n;
		int arr[n]; for(auto &e: arr) cin >> e;
		int pe = arr[0]%2;
		int po = arr[1]%2;
		int ans = 1;
		for(int i=0;i<n;++i){
			if(i%2){
				if(arr[i]%2 != po){
					ans = 0;
					break;
				}
			}else{
				if(arr[i]%2 != pe){
					ans = 0;
					break;
				}
			}
		}
		cout << (ans? "YES":"NO") << endl;
	}
	exit(0);
}
