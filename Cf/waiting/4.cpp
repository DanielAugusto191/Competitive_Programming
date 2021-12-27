// 
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
		int n,k;cin>>n>>k;
		int arr[n]; for(int i=0;i<n;++i) cin >> arr[i];
		sort(arr, arr+n);
		int ans = 0;
		for(int i=0;i<k;++i) ans += arr[n-2*k+i]/arr[n-k+i];
		for(int i=0;i<n-2*k;++i) ans += arr[i];
		cout << ans << endl;
	}
	exit(0);
}
