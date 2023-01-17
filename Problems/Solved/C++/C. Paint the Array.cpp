// https://codeforces.com/contest/1618/problem/C
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
		vector<ll> arr(n), arr2(n); for(int i=0;i<n;++i) cin >> arr[i], arr2[i] = arr[i];
		ll ans = 1;
		ll k;
		k = arr[0];
		for(int i=2;i<n;i+=2) k = __gcd(k, arr[i]);
		for(int i=1;i<n;i+=2) if(arr[i]%k==0) {ans = 0;break;}
		if(ans) cout << k << endl;
		else{
			ans = 1;
			k = arr[1];
			for(int i=3;i<n;i+=2) k = __gcd(k, arr[i]);
			for(int i=0;i<n;i+=2) if(arr[i]%k==0){ans =0;break;}
			cout << (ans? k:0) << endl;
		}

	}
	exit(0);
}

// 2 6 4 12
