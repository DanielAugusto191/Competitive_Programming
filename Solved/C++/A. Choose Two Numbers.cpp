// https://codeforces.com/contest/1206/problem/A
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
	int a,b;cin>>a;
	int arr[a]; read(arr, a);
	cin >> b;
	int arr2[b]; read(arr2,b);
	sort(arr, arr+a);
	sort(arr2, arr2+b);
	for(int i=0;i<a;i++)
		for(int j=0;j<b;j++){
			int x = arr[i]+arr2[j];
			int ans = 1;
			for(int k = i+1;k<a && x >= arr[k];k++){
				if(arr[k] == x) ans = 0;
			}
			int ans2 = 0;
			if(ans){
				for(int k=j+1;k<b && x >= arr2[k]; k++){
					if(arr2[k] == x) ans2 = 1;
				}
			}
			if(ans && !ans2){
				cout << arr[i] << ' ' << arr2[j] << endl;
				return 0;
			}
		}
	
	return (0);
}

