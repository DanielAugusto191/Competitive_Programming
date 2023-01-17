// https://codeforces.com/contest/1557/problem/A
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
const int MAX = 3e5 + 50;
int arr[MAX];

int main(){_
	int t;cin>>t;
     while(t--){
          int n, m = -INF;
          double s = 0;
          cin>>n;
          for(int i=0;i < n; ++i){
               cin >> arr[i];
               m = max(m, arr[i]);
               s += arr[i];
          }
          s -= m;
          cout << fixed << setprecision(9) << m*1.0 + s*1.0/(n-1)*1.0 << endl;

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

