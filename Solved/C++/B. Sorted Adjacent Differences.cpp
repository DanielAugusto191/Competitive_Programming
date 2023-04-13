// https://codeforces.com/contest/1339/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n]; read(arr, n);
		sort(arr, arr+n);
		cout << arr[(n-1)/2] << ' ';
		for(int i=1;i<=n/2;i++) {
			if((n-1)/2+i < n) cout << arr[(n-1)/2+i] << ' ';
			if((n-1)/2-i > -1) cout << arr[(n-1)/2-i] << ' ';
		}
		cout << endl;
	}	
	return (0);
}

