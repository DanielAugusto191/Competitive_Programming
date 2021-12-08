// https://codeforces.com/contest/1574/problem/A
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
          int n;cin>>n;
          vector<char> ans;
          for(int j=0;j<2*n;++j){
               if(j%2==0){
                    ans.push_back('(');
               }else{
                    ans.push_back(')');
               }
          }
          for(auto c: ans) cout << c;
          cout << endl;
          for(int i = 1;i<n;++i){
               for(int j=0;j<i;++j) cout << '(';
               ans.pop_back();
               ans.pop_back();
               for(auto c: ans) cout << c;
               for(int j=0;j<i;++j) cout << ')';
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

