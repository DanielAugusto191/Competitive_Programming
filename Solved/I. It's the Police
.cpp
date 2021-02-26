// https://codeforces.com/gym/101149/problem/I
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n,m;
vector<vector<int> > g;
vector<int> grau;
vector<int> resp;

int main(){_
	scanf("%d %d", &n, &m);
	g.resize(n);
	grau.resize(n,0);
	resp.resize(n,1);
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d %d", &a, &b);
		a--;b--;
		g[a].pb(b);
		g[b].pb(a);
		grau[a]++;
		grau[b]++;
	}
	int mm = INF;
	int k;
    for(int i=0;i<n;++i) if(grau[i] < mm){mm = grau[i];k=i;}
	resp[k] = 0;
	for(auto& e: g[k])resp[e] = 0;
	for(int i=0;i<n;++i) cout << resp[i] << ' ';
	cout << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        


