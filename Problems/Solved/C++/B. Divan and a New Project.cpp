// https://codeforces.com/contest/1614/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef unsigned long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		pair<int,int> arr[n];
		for(int i=0;i<n;++i){
			cin >> arr[i].first;
			arr[i].second = i;
		}
		int ans[n+1];
		sort(arr, arr+n, greater<pair<int,int>>());
		ans[0] = (n+1)/2;
		int k = 1;
		ll l = 0;
		for(int i=0;i<n;i+=2){
			ans[arr[i].second+1] = ans[0]+k;
			l += abs(ans[0]-ans[arr[i].second+1])*1LL*arr[i].first;
			if(i+1 >= n) break;
			ans[arr[i+1].second+1] = ans[0]-k;
			l += abs(ans[0]-ans[arr[i+1].second+1])*1LL*arr[i+1].first;
			++k;
		}
		cout << 2LL*l << endl;
		for(int &e: ans) cout << e << ' ';
		cout << endl;
		


	}
	exit(0);
}
