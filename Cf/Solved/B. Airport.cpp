// https://codeforces.com/contest/218/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n,m;cin>>n>>m;
	int arr[m],arr2[m];for(int i=0;i<m;++i) cin >> arr[i], arr2[i] = arr[i];
	sort(arr, arr+m);
	pair<int,int> ans = {0,0};
	for(int i=0, l=0;i<n;++i){
		while(arr[l]==0) ++l;
		ans.first += arr[l];
		--arr[l];
	}
	for(int i=0;i<n;++i){
		auto k = max_element(arr2, arr2+m);
		ans.second += *k;
		(*k)--;
	}
	cout << ans.second << ' ' << ans.first << endl;

	exit(0);
}
