// https://codeforces.com/contest/1698/problem/C
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
	int t;cin>>t;
	while(t--){
		int n ;cin >> n;
		int arr[n]; for(auto &e: arr) cin >> e;
		int po = 0,ne = 0, z = 0;
		vector<int> nz;
		for(int i=0;i<n;++i){
			if(arr[i] > 0) po++, nz.push_back(arr[i]);
			else if(arr[i] < 0) ne++, nz.push_back(arr[i]);
			else z++;
		}
		if(po >= 3 || ne >= 3) {
			cout << "NO" << endl;
			continue;	
		}
		if(z == n){
			cout << "YES" << endl;
			continue;	
		}
		if(z > 0) nz.push_back(0);
		int l = nz.size();
		int ans = 1; 
		for(int i=0;i<l;++i){
			for(int j=i+1;j<l;++j){
				for(int k=j+1;k<l;++k){
					ll x = nz[i]+nz[j] + nz[k];
					int isin = 0;
					for(int o=0;o<l;++o){
						if(x == nz[o]){
							isin = 1;
							break;
						}
					}
					if(!isin) ans = 0;
				}
			}
		}
		cout << (ans? "YES":"NO") << endl;

		

	}
	exit(0);
}
/*
-1 -2 1 2 0 0

*/