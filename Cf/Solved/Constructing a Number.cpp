// https://www.hackerrank.com/challenges/constructing-a-number/problem
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e6;

int main(){
	int n;cin>>n;
	int arr[n]; for(int i=0;i<n;++i) cin >> arr[i];
	arr[0] = MAX/2;
	if(arr[n-1] <= MAX/2){
		cout << arr[n-1]-1 << endl;
	}else if(arr[0] > MAX/2){
		cout << MAX-arr[0]  << endl;
	}else{
		int ans = lower_bound(arr, arr+n, MAX/2) - arr;
		ans = max(arr[ans-1],MAX-arr[ans]);
		cout << ans << endl;
	}

	exit(0);
}
