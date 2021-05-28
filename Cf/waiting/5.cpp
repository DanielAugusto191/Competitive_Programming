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

int n,m,c,k;
vector<vector<ii> > G(1000, vector<ii>());
vector<int> dist(1000, INF);

void dja(int x){
     priority_queue<ii> p;p.push({-0,x});
     while(!p.empty()){
          ii y = p.top();p.pop();
          if(-y.first > dist[y.second]) continue;
          dist[y.second] = -y.first;
          if(y.second < c){ 
               for(ii &pv: G[y.second]) if(pv.second == y.second+1) if(-((-y.first)+pv.first) < dist[pv.second]){
                    p.push({-((-y.first)+pv.first), pv.second});
                    break;
          }}
          else 
               for(ii &pv: G[y.second])
                    if(-((-y.first)+pv.first) < dist[pv.second]) 
                         p.push({-((-y.first)+pv.first), pv.second});
     }
}

int main(){_
     
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

