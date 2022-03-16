// https://codeforces.com/problemset/problem/275/A
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
	int arr[3][3];
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			cin >> arr[i][j];
		}
	}
	for(int i=0;i<3;++i){
		for(int j=0;j<3;++j){
			int ans = arr[i][j];
			if(i!=0) ans += arr[i-1][j];
			if(j!=0) ans += arr[i][j-1];
			if(j<2) ans += arr[i][j+1];
			if(i<2) ans += arr[i+1][j];
			if(ans%2) cout << 0; else cout << 1;
		}
		cout << endl;
	}
	exit(0);
}
