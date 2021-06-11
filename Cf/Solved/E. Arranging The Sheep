// https://codeforces.com/contest/1520/problem/E
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

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			char c;cin>>c;
			if(c == '*') v.pb(i);
		}
		int l = (int)v.size();
		int k = l/2;
		cout << v[k] << endl;
		k = l ? v[k]-l/2 : 0;
		cout << ' ' << endl;
		ll ans = 0;
		for(int i=0;i<l;++i){
			ans += abs(k-v[i]);
			k++;
		}
		cout << ans << endl;
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

