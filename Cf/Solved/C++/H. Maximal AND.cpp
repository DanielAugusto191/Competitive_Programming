// https://codeforces.com/contest/1669/problem/H
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin >> t;
	while(t--){
		int n,k;cin>>n>>k;
		int arr[n];for(auto &e: arr) cin >> e;
		int ans = 0;
		for(int j=30;j>=0;--j){
			int jset = 0;
			for(int i=0;i<n;++i){
				if(arr[i] & (1 << j)) jset++;
			}
			if(k >= (n-jset)){
				k -= (n-jset);
				ans += (1 << j);
			}
		}
		cout << ans << endl;
	}
	exit(0);
}
/*
010
001
001


*/