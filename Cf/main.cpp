// 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n];for(auto &e: arr) cin >> e;
		int mm = *min_element(arr, arr+n);
		vector<int> ans;
		for(int i=1;i<n;++i) ans.push_back(mm-(arr[i]%mm));
		cout << ans.size()+1 << endl;
		cout << 1 << ' ' << 0 << endl;
		for(int i=0;i<ans.size();++i) cout << i+2 << ' ' << ans[i] << endl;
	}
	exit(0);
}
