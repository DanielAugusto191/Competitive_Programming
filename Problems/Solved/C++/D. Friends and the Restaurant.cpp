// https://codeforces.com/contest/1729/problem/D
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a, n) for(int i=0;i<n;++i){cout << a[i] << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 2e5 + 10;

vector<int> v(MAX);

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;++i) cin >> v[i];
		for(int i=0;i<n;++i) {
			int a;cin>>a;
			v[i] = a-v[i];
		}
		sort(v.begin(), v.begin()+n);
		int k = lower_bound(v.begin(), v.begin()+n, 0) - v.begin();
		int kk = 0;
		int l = n-1;
		int ans = 0;
		while(kk < k){
			if(v[kk]+v[l] >= 0){
				ans++;
				l--;
			}
			kk++;
		}
		ans += (l-k+1)/2;
		cout << ans << endl;

	}
	exit(0);
}