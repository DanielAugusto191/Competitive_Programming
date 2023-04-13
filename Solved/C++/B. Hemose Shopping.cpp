// https://codeforces.com/contest/1592/problem/B
#pragma GCC optimization ("O2")
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5+10;
int arr[MAX], arrS[MAX];
int main(){_
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		for(int i=0;i<n;++i) cin >> arr[i], arrS[i] = arr[i];
		sort(arrS, arrS+n);
		bool ans = 1;
		for(int i=n-x;i<x;++i) if(arr[i] != arrS[i]){ans =0;break;}
		if(ans) cout << "YES" << endl; else cout << "NO" << endl;
	}
	exit(0);
}
