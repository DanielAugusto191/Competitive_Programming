// https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02
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
	vector<int> arr(n+1);arr[0]=0;for(int i=1;i<=n;++i) cin >> arr[i], arr[i] = arr[i]+arr[i-1];
	int a,b;cin>>a>>b;++a;++b;
	if(a != 0) a = arr[a-1];
	cout << arr[b]-a << endl;
	

	exit(0);
}
