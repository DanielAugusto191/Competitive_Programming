// https://codeforces.com/problemset/problem/139/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int arr[7];

int main(){_
	int n;cin>>n;
	for(int i=0;i<7;++i) cin >> arr[i];
	int d = -1;
	while(n>0){
		d = (d+1)%7;
		n -= arr[d];
	}
	cout << d+1 << endl;
	exit(0);
}
