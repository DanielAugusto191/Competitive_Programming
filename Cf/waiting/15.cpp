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

const int MAX = 1e5;

int n,m,x,y;
vector<pair<int, ii> > G[MAX]; // G[i] = A, G[i].f = B, G[i].s.f = T, G[i].s.s = K
vector<ll> dist(1000);

void f(){
     priority_queue<pair<ll,int> > p;
     p.push({-0, x});
     dist[x] = 0;
     while(!p.empty()){
          ll w = -p.top().f;
          int k = p.top().s;
          p.pop();
          if(w > dist[k]) continue;
          for(auto &pv: G[k]){
               ll nd = w;
               if(pv.s.s > nd){
                    nd += (pv.s.s - nd)*!(x==k) + pv.s.f;
               }else{
                    nd += (ceil(nd*1.0/pv.s.s) * pv.s.s - nd) + pv.s.f;
               }
               if(dist[pv.f] > nd){
                    dist[pv.f] = nd;
                    p.push({-nd, pv.f});
               }
          }
     }
}

int main(){_
	cin >> n >> m >> x >> y;
     x--;y--;
     for(int i=0;i<n;++i) dist[i] = LINF;

     for(int i=0;i<m;++i){
          int a,b,c,d;
          cin >> a >> b >> c >> d;
          a--;b--;
          G[a].pb({b, {c,d}});
          G[b].pb({a, {c,d}});
     }

     f();
     if(dist[y] == LINF) dist[y] = -1;
     cout << dist[y] << endl;

	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

