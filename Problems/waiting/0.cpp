// https://codeforces.com/contest/1768/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 2e5;


int main(){_
// 5 3 4 2 1
// 4 2 3 1 5

// 5 3 4 2 5
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> a(n,0),b(n,0),c(n,0);
		unordered_map<int,int> vis, bi, ci;
		for(int i=0;i<n;++i) cin >> a[i];
		//if(n==1){
		//	if(a[0] == 1){
		//		cout << "YES" << endl;
		//		cout << 1 << endl;
		//		cout << 1 << endl;
		//	}else cout << "NO" << endl;
		//	continue;
		//}
		int ans = 1;
		for(int i=0;i<n;++i){
			if(vis[a[i]] == 2){
				ans = 0;
				break;
			}else if(vis[a[i]] == 1){
				c[i] = a[i];
				ci[c[i]] = i;
			}
			else{
				b[i] = a[i];
				bi[b[i]] = i;
			}
			vis[a[i]]++;
		}
		if(!ans || vis[1] > 1) cout << "NO" << endl;
		else {
			cout << "YES" << endl;
			int lv2 = -1;
			for(int i=0;i<n;++i){
				if(vis[n-i] == 2) {lv2 = i;continue;}
				else if(vis[n-i] == 1){
					c[bi[n-i]] = n-i;
				}else{
					b[ci[n-lv2]] = n-i;
					c[bi[n-lv2]] = n-i;
				}
			}
			for(auto &e: b) cout << e << ' ';
			cout << endl;
			for(auto &e: c) cout << e << ' ';
			cout << endl;
		}
	}
	exit(0);
}
