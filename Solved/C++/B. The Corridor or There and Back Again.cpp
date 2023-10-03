// https://codeforces.com/contest/1872/problem/B
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

pii arr[100];

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;++i) cin >> arr[i].first >> arr[i].second;
		sort(arr, arr+n, [&](pii a, pii b){
				return a.first < b.first;
			});
		int lim = arr[0].first + (arr[0].second-1)/2;
		for(int i=1;i<n;++i){
			if(arr[i].first >= lim) break;
			lim = min(lim, arr[i].first + (arr[i].second-1)/2);
		}
		cout << lim << endl;
	}
	exit(0);
}
/*

*/
