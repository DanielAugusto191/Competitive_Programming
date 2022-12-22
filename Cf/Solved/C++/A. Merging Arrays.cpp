// 
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

int main(){_
	int n,m;cin>>n>>m;
	int arr[n], arr2[m];
	for(auto &e: arr) cin >> e;
	for(auto &e: arr2) cin >> e;
	int l = 0, r = 0;
	while(l < n && r < m){
		if(arr[l] < arr2[r]) cout << arr[l] << ' ', ++l;
		else cout << arr2[r] << ' ', ++r;
	}
	while(l < n) cout << arr[l] << ' ', ++l;
	while(r < m) cout << arr2[r] << ' ', ++r;
	cout << endl;
	exit(0);
}
