// https://codeforces.com/contest/1698/problem/A
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
const int MAX = 500;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];for(auto &e: arr) cin >> e;
		for(int i=0;i<n;++i){
			int k = 0;
			for(int j=0;j<n;++j){
				if(j==i) continue;
				k ^= arr[j];
			}
			if(arr[i] == k){
				cout << arr[i] << endl;
				break;
			}
		}
	}
	exit(0);
}