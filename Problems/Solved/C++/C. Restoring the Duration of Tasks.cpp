// https://codeforces.com/contest/1690/problem/C
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
		int arr[n];int arr2[n];
		for(auto &e: arr) cin >> e;
		for(auto &e: arr2) cin >> e;
		cout << arr2[0]-arr[0] << ' ';
		for(int i=1;i<n;++i) if(arr[i] > arr2[i-1]) cout << arr2[i]-arr[i] << ' '; else cout << arr2[i]-arr2[i-1] << ' ';
		cout << endl;
	}
	exit(0);
}
