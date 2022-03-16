// https://codeforces.com/contest/1569/problem/B
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

int main(){
	#ifdef ONLINE_JUDGE
          _
     #endif
     int t;cin>>t;
     while(t--){
          int n;cin>>n;
          string arr; cin >> arr;
          vector<int> v;
          for(int i=0;i<n;++i) if(arr[i] == '2') v.pb(i);
          int l = v.size();
          if(l == 1 || l == 2) {cout << "NO" << endl; continue;}
          char ans[n][n];
          cout << "YES" << endl;
          for(int i=0;i<n;++i){
               for(int j=0;j<n;++j){
                    if(i==j) ans[i][j] = 'X';
                    else ans[i][j] = '=';
               }
          }
          for(int i=0;i<l;++i){
               ans[v[i]][v[(i+1)%l]] = '+';
               ans[v[(i+1)%l]][v[i]] = '-';
          }
          for(int i=0;i<n;++i){
               for(int j=0;j<n;++j){
                    cout << ans[i][j];
               }
               cout << endl;
          }
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

