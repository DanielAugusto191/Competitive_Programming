// https://codeforces.com/contest/977/problem/D
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
	int n;cin>>n;
     map<ll, int> m;
     ll arr[n];for(auto &e: arr) {cin >> e; m[e] = 1;}
     ll x;
     for(auto &e: arr){
          if(e%3 == 0) {
               if(!m[2*e] && !m[e/3]) x = e;
          }
          else if(!m[2*e]) x = e;
     }
     ll ans[n];
     // for(auto &e: ans) e = -1;
     ans[n-1] = x;
     for(int i = n-2; i>= 0; --i){
          if(m[x/2]){ans[i] = x/2; m[x/2] = 0;}
          else {ans[i] = 3*x; m[3*x] = 0;}
          x = ans[i];
     }
     for(auto e: ans) cout << e << ' ';
     cout << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

