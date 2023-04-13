// https://codeforces.com/contest/84/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	ll n;cin>>n;
	ll arr[n];for(auto& e: arr) cin >> e;
	ll ans = 0;
	for(ll i=0;i<n;i++){
		ll j = i;
		while((arr[i] == arr[j])){j++;if(j >=n){j=n; break;}}
		j--;
		ll x = (j-i+1)*(j-i+2)/2;
		ans += x;
		i = j;
	};
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


