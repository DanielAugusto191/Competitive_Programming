// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	int arr[n]; for(auto &e: arr) cin >> e;
	for(int i=0;i<n/2;++i) swap(arr[i], arr[n-i-1]);
	for(auto &e: arr) cout << e << ' ';
	cout << endl;
	exit(0);
}
