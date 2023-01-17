// https://codeforces.com/contest/1538/problem/F
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
          int l,r;
          cin >> l >> r;
          int ans = r - l;
          for(int i=1;i<10;++i){
               ans += r/(int)pow(10,i) - l/(int)pow(10,i);
          }
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

