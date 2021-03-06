// https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
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

int bsL(int arr[], int x, int l, int r){
	if(l+1 >= r) return r;
	int m = (l+r)/2;
	if(arr[m] < x) return bsL(arr, x, m, r);
	else return bsL(arr, x, l, m);
}

int main(){_
	int n,k;cin>>n>>k;
	int arr[n];read(arr,n);
	while(k--){
		int x;cin>>x;
		cout << bsL(arr, x, -1, n)+1 << endl;	
	}
	exit(0);
}

