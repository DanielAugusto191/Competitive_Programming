// https://codeforces.com/contest/1618/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<string> arr(n-2); for(auto &e: arr) cin >> e;
		if(n == 3){
			cout << 'a'+arr[0] << endl;
			continue;
		}
		string ans = arr[0];
		for(int i=1;i<n-2;++i){
			if(ans[ans.size()-1] == arr[i][0]) ans += arr[i][1];
			else ans += arr[i];
		}
		while((int)ans.size() < n) ans += 'a';
		cout << ans << endl;
	}
	
	exit(0);
}