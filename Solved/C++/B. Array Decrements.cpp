// https://codeforces.com/contest/1690/problem/B
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
	while(t--){
		int n;cin>>n;
		int arr[n], arr2[n];
		for(auto &e: arr) cin >> e;
		for(auto &e: arr2) cin >> e;
		int c= 0;
		int k = 0;
		for(int i=0;i<n;++i){
			if(arr2[i] != 0){
				c = 1;
				k = arr[i]-arr2[i];
				break;
			}
		}
		
		if(!c){
			cout << "YES" << endl;
			continue;
		}
		if(k < 0){
			cout << "NO" << endl;
			continue;
		}
		int ans = 1;
		for(int i=0;i<n;++i){
			if(arr[i]-arr2[i] != k){
				if(arr2[i] == 0 && arr[i]-arr2[i] < k){
					continue;
				}
				ans = 0;
				break;
			}
		}
		cout << ((ans)? "YES":"NO" )<< endl;
	}
	exit(0);
}
