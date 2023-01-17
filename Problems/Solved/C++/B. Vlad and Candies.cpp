// https://codeforces.com/contest/1660/problem/B
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
		int arr[n];
		for(auto &e: arr) cin >> e;
		if(n == 1) {if(arr[0] == 1) cout << "YES" << endl; else cout << "NO" << endl;}
		else{
			sort(arr, arr+n);
			cout << ((arr[n-1] - arr[n-2] >= 2)? "NO":"YES") << endl;
		}
	}	
	exit(0);
}