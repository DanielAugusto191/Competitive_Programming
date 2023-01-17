// https://codeforces.com/contest/1772/problem/D
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
int arr[MAX];

int main(){_
	// 1 2 3 5 4 6
	int t;cin>>t;
	while(t--){
		int n;cin>>n;int arr[n]; for(auto &e: arr) cin >> e;
		int mm = 0, ma = INF;
		for(int i=0;i<n-1;++i){
			int l = (arr[i]+arr[i+1])/2,r = (arr[i]+arr[i+1]+1)/2;
			if(arr[i] < arr[i+1]) ma = min(ma, l);
			if(arr[i] > arr[i+1]) mm = max(mm, r);
		}
		cout << ((mm <= ma)?mm:-1) << endl;
	}
	exit(0);
}
