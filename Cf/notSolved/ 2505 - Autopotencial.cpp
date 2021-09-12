// https://www.urionlinejudge.com.br/judge/pt/problems/view/2505
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
	int n;
     while(cin>>n){
          int l = n;
          string s = to_string(n);
          int k = pow(10,(int)s.size());
          l *= l;
          int c = 2;
          while(l%k != n){
               l *= n;
               c++;
          }
          cout << l << endl;
          cout << c << endl;
          if(c > n) cout << "NO" << endl;
          else{
               if (n%c == 1) cout << "YES" << endl; else cout << "NO" << endl;
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

