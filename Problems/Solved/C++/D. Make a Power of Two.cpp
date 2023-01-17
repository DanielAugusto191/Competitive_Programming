// https://codeforces.com/contest/1560/submission/126353259
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

typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 64;
vector<ll> p2(MAX);
int ans[MAX];
int main(){_
     for(int i=0;i<MAX;++i){
          p2[i] = 1LL<<i;
          ans[i] = INF;
     }
     int t;cin>>t;
     while(t--){
          int n;cin>>n;
          string k = to_string(n);
          for(int op = 0;op<MAX;++op){
               string s = to_string(p2[op]);
               int j = 0;
               int x = (int)k.size();
               int Tans = 0;
               for(int i=0;i<x;++i) if(k[i] == s[j]) ++j; else Tans++;
               Tans += (int)s.size() - j;
               ans[op] = Tans;
          }
          cout << *min_element(ans, ans+MAX) << endl;
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

