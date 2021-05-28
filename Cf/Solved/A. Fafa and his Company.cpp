// https://codeforces.com/contest/935/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
int main(void){
	int n;cin>>n;
	int c =0 ;
	for(int i=1;i<n/2+1;i++){
		if((n-i) % i == 0) c++;
	}	
	cout << c << endl;
	return (0);
}

