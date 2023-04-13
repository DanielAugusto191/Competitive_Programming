// https://codeforces.com/contest/1604/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int arr[100];
int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;++i) cin >> arr[i];
		ll ans = 0, i=0, k = 1;
		while(i < n){
			if(arr[i] > k) ans+= arr[i]-k, k = arr[i];
			++i;
			++k;
		}
		cout << ans << endl;
	}
	exit(0);
}
