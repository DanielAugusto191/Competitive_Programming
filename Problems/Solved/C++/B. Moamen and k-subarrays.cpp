// https://codeforces.com/contest/1557/problem/B
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

int main(){_
	int t;cin>>t;
     while(t--){
          int n,k;cin>>n>>k;
          int ans = 1;
          vector<ii> m(n);
          for(int i=0;i<n;++i){
               cin >> m[i].f;
               m[i].s = i;
          }
          sort(all(m));
          for(int i=1;i<n;++i) if(m[i-1].s + 1 != m[i].s) ans++;
          if(ans <= k) cout << "Yes" << endl; else cout << "No" << endl;
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

