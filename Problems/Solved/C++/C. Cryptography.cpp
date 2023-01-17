// https://codeforces.com/gym/101845/problem/C

// 1 case corner teste 6 N PASSA
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
	string s,t;
     cin>>s>>t;
     ll G[256][256];
     for(int i=0;i<256;++i) for(int j=0;j<256;++j) G[i][j] = LINF;
     for(int i=0;i<256;++i) G[i][i] = 0;
     int n;cin>>n;
     while(n--){
          char a,b;cin>>a>>b;
          ll c; cin>>c;
          G[a][b] = min(G[a][b], c);
     }
     for(int k=0;k<256;++k) for(int i=0;i<256;++i) for(int j=0;j<256;++j) G[i][j] = min(G[i][j], G[i][k]+G[k][j]);
     n = (int)s.size();
     ll ans = 0;
     for(int i=0;i<n;++i){
          if(G[s[i]][t[i]] == LINF) {ans = -1;break;}
          ans += G[s[i]][t[i]];
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