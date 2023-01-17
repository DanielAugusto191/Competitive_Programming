// https://codeforces.com/contest/1569/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;++i) cin >> arr[i];

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 998244353;

int main(){
	#ifdef ONLINE_JUDGE
          _
     #endif
     int t;cin>>t;
     while(t--){
          int n;cin>>n;
          vector<int> arr(n); for(auto &e: arr) cin >> e;
          int m = *max_element(all(arr));
          int l = (int)count(all(arr), m-1), p = (int)count(all(arr), m);
          ll ans = 1, x = 1;
          for(ll i = 1; i<n+1;++i) {
               ans = (ans%MOD*i%MOD)%MOD;
               if(i != l+1) x = (x*i)%MOD;
          }
          if(p == 1) ans = (ans - x + MOD)%MOD;
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

