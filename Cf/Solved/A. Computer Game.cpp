// https://codeforces.com/contest/1598/problem/A
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
	int t;cin>>t;
	while(t--){
		int n, ans = 1;cin>>n;
		string arr,arr2;cin>>arr>>arr2;
		for(int i=0;i<n;++i) if(arr[i] == '1' && arr2[i] == '1') {ans = 0;break;}
		if(arr[0] == '1' || arr2[n-1] == '1') ans = 0;
		if(ans) cout << "YES" << endl; else cout << "NO" << endl;
	}

	exit(0);
}
