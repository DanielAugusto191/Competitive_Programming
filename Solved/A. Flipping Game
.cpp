// https://codeforces.com/contest/327/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
int main(void){_
	int n;cin>>n;
    int arr[n]; read(arr, n);
    int ans = 0;
    for(int i=0;i<n;i++){
        int ant = 0;
        for(int j=i;j<n;j++){
		int m = 0;
		for(int k=0;k<i;k++) m += arr[k];
		ant+=!arr[j];
		m += ant;
		for(int k=j+1;k<n;k++) m+=arr[k];	
		ans = max(ans, m);
        }
    }
    cout << ans << endl;
	return (0);
}

