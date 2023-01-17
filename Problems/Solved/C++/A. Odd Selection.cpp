// https://codeforces.com/problemset/problem/1363/A
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
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n,x;cin>>n>>x;
		int o = 0, e = 0;
		for(int i=0;i<n;++i){
			int a;cin>>a;
			if(a%2) o++; else e++;
		}
		int p = min(o, x);
		p -= !(p%2);
		int ans = 0;
		for(int i=1;i<=p;i+=2){
			if(x-i <= e){
				ans = 1;break;
			}
		}
		cout << (ans?"Yes":"No") << endl;

	}
	exit(0);
}
