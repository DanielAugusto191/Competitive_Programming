// https://codeforces.com/contest/1472/problem/C
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
	int t;
	cin>>t;
	while(t--){
		ll n;cin>>n;
		vector<int> v(n+1);for(ll i=1;i<=n;i++) cin >> v[i];
		vector<ll> cp(n+1);
		ll mm = -1;
		for(ll i=n;i>0;--i){
			cp[i] = i+v[i];
			while(cp[i] < n+1) cp[i] += cp[cp[i]];
			cp[i] -= i;
			mm = max(mm, cp[i]);
		}
		cout << mm << endl;
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


