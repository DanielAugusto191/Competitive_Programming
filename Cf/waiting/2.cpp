// https://codeforces.com/contest/1338/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int p2[30];
	for(int i=0;i<30;++i) p2[i] = (1<<(i+1))-1;
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		ll arr[n], ans = 0;
		for(auto &e: arr) cin >> e;
		for(int i=1;i<n;++i) {
			if(arr[i] < arr[i-1]){
				ll k = -1;
				for(int j=0;j<30;++j){
					if(p2[j] >= arr[i-1]-arr[i]){
						k = j+1;
						arr[i] += p2[j];
						break;
					}	
				}
				if(k==-1) k = 31;
				cout << k << ' ';
				for(int j=0;j<k;++j) if(arr[i] - p2[j] >= arr[i-1]) arr[i] -= p2[j]; else break;
				ans = max(ans, k);
			}
		}
		cout << endl;
		for(auto e: arr) cout << e << ' ';
		cout << endl;
		cout << ans << endl;
	}
	exit(0);
}