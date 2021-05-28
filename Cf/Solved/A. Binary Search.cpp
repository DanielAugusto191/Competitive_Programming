// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto& e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto& e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int bs(ll arr[], ll x, int e, int d){
	if(e > d) return 0;
	int m = (e+d)/2;
	if(arr[m] == x){
		return 1;
	}
	if(arr[m] > x){
		return bs(arr, x, e, m-1);
	}else{
		return bs(arr, x, m+1, d);
	}
}

int main(void){_
	int n,k;cin>>n>>k;
	ll arr[n];read(arr,n);
	sort(arr, arr+n);
	while(k--){
		ll x;cin>>x;
		if(bs(arr, x, 0, n)) cout << "YES" << endl; else cout << "NO" << endl;
	}

	return (0);
}

