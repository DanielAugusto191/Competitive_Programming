// https://codeforces.com/contest/1762/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

vector<int> arr(50);

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int o = 0;
		for(int i=0;i<n;++i){
			cin >> arr[i];
			o += arr[i]%2;
		}
		if(o%2 == 0) cout << 0 << endl;
		else{
			int mm = INF;
			for(int i=0;i<n;++i){
				int c = arr[i]%2;
				int k = 0;
				while(arr[i]%2 == c) arr[i]/=2, ++k;
				mm = min(mm, k);
			}
			cout << mm << endl;
		}

	}
	exit(0);
}
