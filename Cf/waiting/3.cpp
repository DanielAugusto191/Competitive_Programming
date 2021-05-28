// 
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
const int MAX = 1e4;

vector<ii> g[MAX];
vector<int> dist(MAX);


void dij(int a){
     priority_queue<ii> p; p.push({-0,a});
     while(!p.empty()){
          int d = -(p.top().first), u = p.top().second;
          p.pop();
          if(d > dist[u]) continue;
          dist[u] = -d;
          for(ii pv: g[u]){
               int w = -d + pv.first;
               if(dist[pv.second] > w) p.push({w, pv.second});
          }
     }
}

int main(){_
     int t;cin>>t;
     while(t--){
          int n,m;cin>>n>>m;
          
          for(int i=0;i<n;++i){
               g[i].clear();
               dist[i] = INF;
          }

          for(int i=0;i<m;++i){
               int a,b,c;cin>>a>>b>>c;a--;b--;
               g[a].pb({c,b});
          }
          int a,b;cin>>a>>b;a--;b--;
          dij(a);
          if(dist[b] == INF) cout << "NO" << endl; else cout << dist[b] << endl;
          
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

