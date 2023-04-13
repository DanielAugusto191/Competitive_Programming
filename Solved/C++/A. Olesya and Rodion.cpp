// https://codeforces.com/contest/584/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
int main(void){
	int n,t;cin>>n>>t;
	if(n==1){
		if(t==10) cout << -1 << endl;
		else cout << t << endl;
		return 0;
	}
	if(t==10) n--;
	cout << t;
	for(int i=0;i<n-1;i++){
		cout << '0';
	}
	cout << endl;
	return (0);
}

