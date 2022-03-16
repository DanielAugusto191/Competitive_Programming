// 
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

int n;
vector<int> arr, check(51);

bool f(int x){
	if(x == 0) return false;
	if(check[x] || x > n) return f(x/2);
	check[x] = 1;
	return true;
}

int main(){_
	int t;cin>>t;
	while(t--){
		cin>>n;
		arr.clear();
		arr.resize(n);
		fill(check.begin(), check.end(), 0);
		for(int i=0;i<n;++i) cin >> arr[i];
		sort(arr.begin(), arr.end(), greater<int>());
		int ans = 1;
		for(int i=0;i<n; ++i) if(!f(arr[i])) {ans = 0;break;};
		cout << (ans?"YES":"NO") << endl;

	}
	exit(0);
}
