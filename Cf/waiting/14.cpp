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

const int MAX = 1e6;
ii ps ,pe;
int n;
vector<pair<ii, ii> > Vq(MAX);
vector<int> dist(MAX, INF);
vector<int> vis(MAX, 0);
vector<vector<int> > G(MAX, vector<int>(MAX)); // Menor distancia entre cada bloco. Matriz triangular.

void dja(int pt){
    priority_queue<ii> p; p.push({-0, pt});
    while(!p.empty()){
        ii k = p.top();p.pop();
        if(-k.f > dist[k.s]) continue;
        vis[pt] = 1;
        dist[k.s] = -k.f;
        for(int i=0;i<n;++i){
            if(vis[i]) continue;
            int nd = (-k.f) + G[k.s][i];
            if(dist[i] > nd){
                p.push({-nd, i});
            }
        }
    }
}

int main(){
	cin >> ps.f >> ps.s >> pe.f >> pe.s >> n;
    n += 2; // Add ini e fim
    for(int i=0;i<n;++i) cin >> Vq[i].f.f >> Vq[i].f.s >> Vq[i].s.f >> Vq[i].s.s;
    // Inicio como um retangulo
    Vq[n].f.f = ps.f;
    Vq[n].f.s = ps.s;
    Vq[n].s.f = ps.f;
    Vq[n].s.s = ps.s;
    // Fim como um retangulo
    Vq[n+1].f.f = pe.f;
    Vq[n+1].f.s = pe.s;
    Vq[n+1].s.f = pe.f;
    Vq[n+1].s.s = pe.s;
    // Grafo - Distancia entre cada retangulo
    for(int i=0;i<n;++i) for(int j=0;j<n;++j) G[i][j] = max(0, max(Vq[i].f.f, Vq[j].f.f) - min(Vq[i].s.f, Vq[j].s.f))+max(0, max(Vq[i].f.s, Vq[j].f.s) - min(Vq[i].s.s, Vq[j].s.s));
    dja(n-2);
    cout << dist[n-1] << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

