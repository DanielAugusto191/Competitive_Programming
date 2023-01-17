// https://codeforces.com/problemset/problem/222/A S1
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
	int n,k;cin>>n>>k;k--;
	vector<int> arr(n);for(auto &e: arr) cin >> e;
	int ans = 1;
	for(int i=k;i<n;++i) if(arr[i] != arr[k]) {ans = 0;break;}
	if(!ans) cout << -1 << endl;
	else{
		int i = k;
		while(i >= 0 && arr[i] == arr[k]) i--;
		cout << i+1 << endl;
	}
	exit(0);
}
