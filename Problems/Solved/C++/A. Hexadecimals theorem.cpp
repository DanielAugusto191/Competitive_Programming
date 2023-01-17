// https://codeforces.com/problemset/problem/199/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int arr[100];
int main(){_
	int n;cin>>n;
	if(n == 0) cout << "0 0 0" << endl;
	else if(n == 1) cout << "1 0 0" << endl;
	else if(n == 2) cout << "1 1 0" << endl;
	else{
		arr[0] = 0;
		arr[1] = 1;
		int i;
		for(i=2;i<100;++i){
			arr[i] = arr[i-1]+arr[i-2];
			if(arr[i] == n) break;
		}
		cout << arr[i-1] << ' ' << arr[i-3] << ' ' << arr[i-4] << endl;

	}
	exit(0);
}
