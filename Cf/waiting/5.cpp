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
		int n;cin>>n;
		for(int i=0;i<n;++i) cin >> arr[i];
		int k = 1;
		for(int i=0;i<n-1;++i){
			if(arr[i] > arr[i+1]){
				k = 0;
				break;
			}
		}
		if(k) {cout << 0 << endl;continue;}
		k = 1;
		for(int i=0;i<n-1;++i){
			if(arr[i] <= arr[i+1]){
				k = 0;
				break;
			}
		}
		if(k) {cout << arr[0] << endl;continue;}
		int mm = 1e9+1, ma = -1;
		for(int i=0;i<n;++i){
			if(arr[i] > ma) ma = arr[i];
			if(arr[i] < mm) mm = arr[i];
		}
		int m = ceil((mm*1.0+ma*1.0)*1.0/2.0);
		for(int i=0;i<n;++i) arr[i] = abs(arr[i]-m);
		k = 1;
		for(int i=0;i<n-1;++i){
			if(arr[i] > arr[i+1]){
				k = 0;
				break;
			}
		}
		cout << (k?m:-1) << endl;
	}
	exit(0);
}
