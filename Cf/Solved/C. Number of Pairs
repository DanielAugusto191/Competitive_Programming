// https://codeforces.com/contest/1538/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int t;cin>>t;
	while(t--){
		int n,l,r;cin>>n>>l>>r;
		int arr[n];
		for(int i=0;i<n;++i) cin >> arr[i];
		sort(arr, arr+n);
		ll ans = 0;
		int a,d;
		for(int i=0;i<n;++i){
			ans += upper_bound(arr, arr+n, r-arr[i]) - arr;
			ans -= lower_bound(arr, arr+n, l-arr[i]) - arr;
			if(l <= 2*arr[i] && 2*arr[i] <= r) ans--;
		}
		cout << ans/2 << endl;

	}
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

