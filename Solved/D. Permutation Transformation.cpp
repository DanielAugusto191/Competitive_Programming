// https://codeforces.com/contest/1490/problem/D
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
int n;
vector<int> v, resp;

void pr(int l, int r, int h){
	if(l < 0 || r > n-1 || l > r) return;
	ii mm = {-INF, -1};
	for(int i=l; i<=r;i++){
		if(v[i] > mm.f){
			mm.f = v[i];
			mm.s = i;
		}
	}
	resp[mm.s] = h;
	pr(l, mm.s-1, h+1);
	pr(mm.s+1, r, h+1);
}

int main(){_
	int t;cin>>t;
	while(t--){
		cin>>n;
		v.resize(n);
		resp.resize(n, -1);
		for(auto &e: v) cin >> e;
		pr(0, n-1, 0);
		for(auto &e: resp) cout << e << ' ';
		cout << endl;
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


