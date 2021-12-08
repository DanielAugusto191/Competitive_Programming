// https://codeforces.com/contest/1562/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
     int t;cin>>t;
     while(t--){
          int a, b,l, r; cin >> a >> b;
          l = a; r = b;
          if(2*a-1 > r){
               cout << r%l << endl;
               continue;
          }
          while(l+1 < r){
               int m = (l+r)/2;
               if(2*m-1 <= b) l = m;else  r = m;
          }
          cout << l-1 << endl;

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

