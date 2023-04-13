// https://codeforces.com/contest/1579/problem/B
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
		int n;cin>>n;
		int arr[n];
		int ans[n];
		for(int i=0;i<n;++i) cin >> arr[i];
		int o = 0;
		for(int i=n;i>=0;--i){
			int k = (max_element(arr, arr+i) - arr) + 1;
			if(k == i-1) continue;
			for(int j=0;j<k;++j){
				int l = arr[0];
				for(int p=0;p<i-1;++p) arr[p] = arr[p+1];
				arr[i-1] = l;
			}
			ans[o++] = k;
		}
		cout << n-1 << endl;
		for(int i=0;i<n-1;++i) cout << 1 << ' ' << n-i << ' ' << ans[i] << endl;
	}

	exit(0);
}
