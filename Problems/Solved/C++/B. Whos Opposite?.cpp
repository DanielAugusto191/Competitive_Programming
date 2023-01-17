// 
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
          int a,b,c; cin >> a >> b >> c;
          if(a > b) swap(a,b);
          int n = (b-a)*2;
          if((a < n/2 && b < n/2 ) || (a > n/2 && b > n/2) || n < b || n < c) {cout << -1 << endl; continue;}
          if(c <= n/2){
               cout << n/2 + c << endl;
          }else{
               cout << c - n/2 << endl;    
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

