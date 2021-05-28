// https://codeforces.com/gym/101845/problem/C

// 1 case corner teste 6 N PASSA
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

const int MAX = 5e5+100;
vector<vector<pair<ll, char> > >G(1e3, vector<pair<ll, char> >());
vector<ll> dist(1e3);



void dja(char c){
     priority_queue<pair<ll, char> > p; p.push({-0, c});
     
     while(!p.empty()){
          pair<ll, char> k = p.top(); p.pop();
          if(-k.first > dist[k.second-33]) continue;
          dist[k.second-33] = -k.first*1LL;
          for(pair<ll ,char> pv: G[k.second-33]){
               ll w = ((-k.first) + pv.first)*1LL;
               if(dist[pv.second-33] > w) p.push({-w, pv.second});}
     }
}

int main(){
	string s,t;cin>>s>>t;
     int m;cin>>m;
     for(int i=0;i<m;++i){
          char a,b;
          int c;
          cin>>a>>b>>c;
          G[a-33].pb({c*1LL,b});
          G[b-33].pb({c*1LL,a});
     }
     ll ans = 0;
     for(int i=0;i<(int)s.size();++i){
          for(int j=0;j<1e3;++j) dist[j] = LINF;
          dja(s[i]);
          ll k = dist[t[i]-33];
          if(k == LINF){
               ans = -1;
               break;
          } 
          ans += k;
     }
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

