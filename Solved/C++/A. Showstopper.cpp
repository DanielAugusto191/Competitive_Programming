// https://codeforces.com/contest/1798/problem/A
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
const int MOD = (int)1e9 + 7;
const int MAX = 1e9;

int arr[100], brr[100];
int n;
bool f(){
	return (*max_element(arr, arr+n) == arr[n-1] && *max_element(brr, brr+n) == brr[n-1]);
}

int main(){_
	int t;cin>>t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;++i) cin >> arr[i];
		for(int i=0;i<n;++i) cin >> brr[i];
		for(int i=0;i<n;++i){
			if(arr[i] < brr[i]) swap(arr[i], brr[i]);
		}
		if(f())	cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	exit(0);
}
/*

*/
