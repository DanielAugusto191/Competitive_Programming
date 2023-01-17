// https://codeforces.com/contest/1747/problem/C
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
const int MAX = 1e5 + 10;
int arr[MAX];

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		for(int i=0;i<n;++i){
			cin >> arr[i];
		}
		int mm = INF;
		for(int i=1;i<n;++i) mm = min(mm, arr[i]);
		if(arr[0] > mm) cout << "Alice" << endl;
		else cout << "Bob" << endl;
	}
	exit(0);
}
