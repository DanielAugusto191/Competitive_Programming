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
const int MAX = 2e5;
vector<vector<ii> > G(MAX, vector<ii>());

void dja(int x, vector<int> &dist){
     priority_queue<ii> p; p.push({-0, x});
     while(!p.empty()){
          ii k = p.top(); p.pop();
          if(-k.first > dist[k.second]) continue;
          dist[k.second] = -k.first;
          for(ii &pv: G[k.second]) if(dist[pv.second] > (-k.first)+pv.first) p.push({-((-k.first) + pv.first), pv.second});
     }
}

int main(){_
	int n,m,x; cin >>n>>m>>x;
     vector<int> dist1(MAX, INF);
     vector<int> dist2(MAX, INF);
     for(int i=0;i<m;++i){
          int a,b,c;cin>>a>>b>>c;a--;b--;
          G[a].pb({c,b});
          G[b].pb({c,a});
     }
     vector<int> f;
     for(int i=0;i<x;++i){
          int a;cin>>a;a--;
          f.pb(a);
     }
     dja(0, dist1);
     dja(n-1, dist2);
     int ans=INF;
     for(auto &e: f) ans = min(ans, dist1[e]+dist2[e]);
     cout << ans << endl;

	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

