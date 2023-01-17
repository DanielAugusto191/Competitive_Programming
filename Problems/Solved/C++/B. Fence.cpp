// https://codeforces.com/contest/363/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n,k;cin>>n>>k;
	vector<int> v(n),ans;
	for(auto &e: v) cin >> e;
	int at = 0;
	for(int i=0;i<k;++i) at += v[i];
	ans.pb(at);
	ii mm = {at, 0};
	for(int i=k;i<n;++i) {
		at = at - v[i-k]+v[i];
		if(at < mm.first){
			mm.first = at;
			mm.second = i-k+1;
		}
	}
	cout << mm.second+1 << endl;


	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        


