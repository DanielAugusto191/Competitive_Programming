// https://codeforces.com/contest/1551/problem/D1
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n,m,k;

void bp(){
     if(k%2==0) cout << "YES" << endl;
     else cout << "NO" << endl;
}

int main(){_
     int t;cin>>t;
     while(t--){
          cin>>n>>m>>k;
          if(n%2 == 1 && m%2 == 1) cout << "NO" << endl;
          if(m == 3){
               if(k <= n && k%2==0) cout << "YES" << endl;
               else cout << "NO" << endl;
          }
          else if(n%2==0 && m%2==0) bp();
          else if(n%2 == 0 && m%2==1){ // Linhas Pares;
               if(k%2==0 && k < n*m/2) cout << "YES" << endl;
               else cout << "NO" << endl;
          }else{ // Colunas Pares;
               if(k < m/2) cout << "NO" << endl;
               else{
                    k -= m/2;
                    bp();
               }
          }
     }
	exit(0);
}
