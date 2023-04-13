// https://codeforces.com/problemset/problem/433/B
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
const int MOD = (int)1e9 + 7;
const int MAX = 1e9;

int main(){_
	int n;cin>>n;
	ll arr1[n], arr2[n];
	int arr[n]; for(auto &e: arr) cin >> e;
	arr1[0] = arr[0];
	for(int i=1;i<n;++i) arr1[i] = arr1[i-1] + arr[i];
	sort(arr, arr+n);
	arr2[0] = arr[0];
	for(int i=1;i<n;++i) arr2[i] = arr2[i-1] + arr[i];
	int t;cin>>t;
	while(t--){
		int p, l, r;cin >> p >> l >> r; l--;r--;
		if(p == 1){
			cout << arr1[r]-(l-1>=0?arr1[l-1]:0) << endl;
		}else{
			cout << arr2[r]-(l-1>=0?arr2[l-1]:0) << endl;
		}
	}
	exit(0);
}
/*

*/
