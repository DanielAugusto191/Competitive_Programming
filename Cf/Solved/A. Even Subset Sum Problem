// https://codeforces.com/contest/1323/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
int mdc(int a, int b) {return b==0 ? a : mdc(b, a%b);}
typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	
     int t;cin>>t;
     vector<int> e,o;
     while(t--){
          int n;cin>>n;
          e.clear(); o.clear();
          for(int i=0;i<n;++i){
               int x;cin>>x;
               if(x%2) o.pb(i);
               else e.pb(i);
          }
          if(e.size() > 0){
               cout << 1 << endl;
               cout << e[0]+1 << endl;
          }else if(o.size()>1){
               cout << 2 << endl;
               cout << o[0]+1 << ' ' << o[1]+1 << endl;
          }else cout << -1 << endl;

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

