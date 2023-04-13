// https://www.urionlinejudge.com.br/judge/pt/problems/view/2359
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

vector<ii> G[1000];
vector<int> hos, dist(1000);
int n,m,q;

int f(){
     priority_queue<ii> p;
     for(int &e: hos) {p.push({-0, e}); dist[e] = 0;}
     int x = -1;
     while(!p.empty()){
          int w = -p.top().first, k = p.top().second;
          p.pop();
          if(w > dist[k]) continue;
          x = max(x, dist[k]);
          for(auto &e: G[k]){
               if(dist[e.s] > w + e.f){
                    dist[e.s] = w+e.f;
                    p.push({-dist[e.s], e.s});
               }
          }
     }
     return x;
}

int main(){_
     while(cin >> n >> m >> q){
          for(int i=0;i<n;++i) dist[i] = INF, G[i].clear(), hos.clear();
          for(int i=0;i<m;++i){
               int a,b,c;cin>>a>>b>>c; a--;b--;
               G[a].pb({c, b});
               G[b].pb({c, a});
          }
          for(int i=0;i<q;++i){
               int a;cin>>a;a--;
               hos.pb(a);
          }
          int ans = f();
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
