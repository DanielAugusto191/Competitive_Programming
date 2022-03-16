// https://codeforces.com/contest/1473/problem/B
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
     int q;cin>>q;
     while(q--){
          string s,t;cin>>s>>t;
          if(s > t){
               string temp = s;
               s = t;
               t = temp;
          }
          int x =  s.size()*t.size() / __gcd(s.size(), t.size());
          string iniS = s;
          string iniT = t;
          while((int)s.size() < x) s += iniS;
          while((int)t.size() < x) t += iniT;
          if(s == t) cout << s << endl;
          else cout << -1 << endl;

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

