// https://codeforces.com/contest/1335/problem/C
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
const int MAX = 2e5 + 10;

int arr[MAX];
unordered_map<int,int> m;
int main(){_
	int t;cin>>t;
	while(t--){
		vector<int> b;
		int n;cin>>n;
		m.clear();
		for(int i=0;i<n;++i){
			int a;cin>>a;
			++m[a];
		}
		pii ml;
		for(int i=0;i<n;++i) {
			
		}
		int mm = -INF;
		for(auto &e: m){
			if(e.second > mm){
				mm = e.second;
				ml = e;
			}
		}
		int pl = m.size() - 1;
		if(pl >= ml.second){
			cout << ml.second << endl;
		}else{
			if(ml.second - 1 >= pl+1){
				cout << pl+1 << endl;
			}else{
				cout << pl << endl;
			}
		}
	}
	exit(0);
}
