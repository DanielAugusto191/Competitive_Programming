// https://codeforces.com/contest/1768/problem/B
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
const int MAX = 1e5;

int arr[MAX];

int main(){_
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		for(int i=0;i<n;++i) cin >> arr[i];
		int i =0;
		int l =1, c =0;
		int ans = 0;
		while(i < n){ // 1 2 3 7 8 4 6 5 10 - 7 8 6 5 10
			if(arr[i] != l){
				++c;
			}else{
				++l;
			}
			++i;
		}
		ans += ceil(c*1.0/k);
		cout << ans << endl;

	}
	exit(0);
}

