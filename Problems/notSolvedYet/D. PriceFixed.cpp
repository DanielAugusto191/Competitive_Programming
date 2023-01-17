// https://codeforces.com/problemset/problem/1539/D
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
int mdc(int a, int b){return b==0 ? a : mdc(b, a%b);}

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5;
int main(){
	int n; cin >> n;
     vector<pair<ll, ll> > p(n);
     ll s = 0;
     for(auto& e: p) {cin >> e.first >> e.second; s+=e.first;}
     sort(p.begin(), p.end(), [&](ii a, ii b){
          return a.second > b.second;
     });
     int i = 0, j = n-1;
     ll c = 0, ans = 0;
     while(i <= j){
          while(i <= j && c < p[j].second){
               ll itens = min(p[i].first, p[j].second-c); 
               ans += 2*itens;
               c+= itens;
               p[i].f -= itens;
               if(p[i].first == 0) i++;
          }
          while(i <= j && c >= p[j].second){
               ans+= p[j].first;
               c+=p[j].first;
               j--;
          }
     }
     cout << ans << endl;



}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        