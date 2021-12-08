// https://codeforces.com/contest/34/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int arr[110];
int main(){_
	int n;cin>>n;
	for(int i=0;i<n;++i) cin >> arr[i];
	int mm = abs(arr[0]-arr[n-1]);
	pair<int,int > ans = {0, n-1};
	for(int i=0;i<n-1;++i){
		int k =abs(arr[i]-arr[i+1]);
		if(k < mm){
			ans = {i, i+1};
			mm = k;
		}
	}
	cout << ans.first+1 << ' ' << ans.second+1 << endl;
	exit(0);
}
