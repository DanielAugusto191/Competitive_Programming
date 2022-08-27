// https://codeforces.com/problemset/problem/476/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
 
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
 
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e5;
int arr[MAX];
int main(){_
	int n;cin>>n;
	for(int i=0;i<n;++i) cin >> arr[i];
	int l=0,r=1;
	for(int i=1;i<n;++i){
		if(arr[i] < arr[i-1]){
			l = i-1;
			while(i<n && arr[i] < arr[i-1]){
				i++;
				r = i;
			}
		}
	}
	sort(arr+l, arr+r);
	int ans = 1;
	for(int i=1;i<n;++i){
		if(arr[i] < arr[i-1]){
			ans = 0;
			break;
		}
	}
	if(ans){
		cout << "yes" << endl;
		cout << l+1 << ' ' << r << endl;
	}else{
		cout << "no" << endl;
	}
	exit(0);
}