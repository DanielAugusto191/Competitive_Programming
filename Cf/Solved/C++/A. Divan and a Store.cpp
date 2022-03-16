// https://codeforces.com/contest/1614/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n,l,r,k;cin>>n>>l>>r>>k;
		int arr[n];
		for(int i=0;i<n;++i) cin >> arr[i];
		sort(arr, arr+n);
		auto it = lower_bound(arr, arr+n, l) - arr, it2 = upper_bound(arr, arr+n, r) - arr;
		pair<int,int> ans = {0,0};
		while(it < n && it < it2){
			ans.first += arr[it];
			++ans.second;
			if(ans.first > k){
				--ans.second;
				break;
			}
			++it;
		}
		cout << ans.second << endl;
	}
	exit(0);
}
