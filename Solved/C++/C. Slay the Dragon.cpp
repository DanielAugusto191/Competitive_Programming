// https://codeforces.com/contest/1574/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

const int MAX = 2e5;
int n;

int main(){_
     cin>>n;
     ll s = 0;
     ll arr[n];
     for(int i=0;i<n;++i) cin >> arr[i], s+= arr[i];
     sort(arr, arr+n);
     int t;cin>>t;
     while(t--){
          ll x,y;cin>>x>>y;
          int k = lower_bound(arr, arr+n, x) - arr;
          ll ans = 2e18;
          if(k < n) ans = min(ans, max(0LL, y-(s-arr[k])));
          if(k > 0) ans = min(ans, (x-arr[k-1]) + max(0LL, y-(s-arr[k-1])));
          cout << ans << endl;
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