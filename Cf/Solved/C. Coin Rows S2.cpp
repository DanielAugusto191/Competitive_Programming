// https://codeforces.com/contest/1555/problem/C
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
const int MAX = 1e5 + 10;
int arr[MAX], arr2[MAX];
int main(){
     int t;cin>>t;
     while(t--){
          int n;cin>>n;
          int s = 0, x = 0;
          for(int i=0;i<n;++i){
               cin >> arr[i];
               s+=arr[i];
          }
          arr2[0] = 0;
          for(int i=1;i<n+1;++i) cin >> arr2[i];
          int ans = s;
          for(int i=0;i<n;++i) {
               s -= arr[i];
               x += arr2[i];
               ans = min(ans, max(s, x));
          }

          cout << ans << endl;
     }
	exit(0);
}

/*    ______ _   _ _____   1 4 11
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        