// https://codeforces.com/gym/101755/problem/J
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

bool ver(int arr[], int n, int k){
	int i=0,j=k,s=0;
	for(int l=0;l<k;l++) s+=arr[l];
	while(j < n){
		int l = s-arr[i]+arr[j];
		if(l!=s) return 0;
		i++; j++;
	}
	return 1;
}

int main(void){_
	int n;cin>>n;
	map<int,int> m;
	for(int i=0;i<n;++i){
		int x;cin>>x;
		m[x]++;
	}
	int ans = 0;
	for(auto& e: m) ans += (e.second - (e.second%2))/2;
	cout << ans/2 << endl;
	return (0);
}
