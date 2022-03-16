// https://codeforces.com/contest/1348/problem/B
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
	int t;cin>>t;
	while(t--){
		int n,k;cin>>n>>k;
		set<int> arr;
		for(int i=0;i<n;i++){
			int x;cin>>x;
			arr.insert(x);
		}
		if((int)arr.size() > k){
			cout << -1 << endl;
			continue;
		}
		int i =1;
		while((int)arr.size() < k){
			arr.insert(i);
			i++;
		}
		cout << (int)arr.size()*n << endl;
		while(n--) for(int e: arr) cout << e << ' ';
		cout << endl;
	}
	return (0);
}
// 4 3
// 2 2 3 4
// 2 3 4 2 3 4 2 3 4 2 3 4
