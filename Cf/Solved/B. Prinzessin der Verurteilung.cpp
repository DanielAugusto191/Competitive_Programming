// https://codeforces.com/contest/1536/problem/B
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
          int n; cin >> n;
          string r;
          cin >> r;
          map<string, int> m;
          for(int i=0;i<n;++i) for(int j=1;j<=3;++j) m[r.substr(i, j)] = 1;
          string ans;
          string s = "`";
          while(1){
               int k = (int)s.size()-1;
               s[k] = '`';
               int c = 0;
               for(int i=0;i<26;++i){
                    s[k] += 1;
                    if(m[s] == 0) {ans = s; c=1; break;}
               }
               if(c) break;
               int l = k;
               while(l-1 >= 0 && s[l-1]+1 == 123){
                    s[l-1] = 'a';
                    l--;
               }
               if(l == 0) s.insert(0, 1, 'a'); else s[l-1]++;
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

