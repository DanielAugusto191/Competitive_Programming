// https://codeforces.com/contest/1692/problem/F
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
		int n;cin>>n;
		vector<int> v(10, 0);
		int arr[n];for(auto &e: arr) cin >> e, v[e%10]++;
		bool ans = false;
		for(int i=0;i<10;++i){
			for(int j=0;j<10;++j){
				for(int k=0;k<10;++k){
					if(v[i]){
						v[i]--;
						if(v[j]){
							v[j]--;
							if(v[k]){
								v[k]--;
								if((i+j+k)%10 == 3) ans = true;
								v[k]++;
							}
							v[j]++;
						}
						v[i]++;
					}
				}
			}
		}
		cout << (ans? "YES":"NO") << endl;

		
	}
	exit(0);
}