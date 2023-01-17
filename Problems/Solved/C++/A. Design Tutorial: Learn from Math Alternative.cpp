// https://codeforces.com/contest/472/problem/A
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
using namespace std;

int p(int x){
	int ans = 1;
	for(int i=2;i*i<=x;i++){
		if(x%i==0){
			ans = 0;
			break;
		}
	}
	return ans;
}

int main(void){
	int n;
	cin >> n;
	for(int i=4;i<n;i+=2){
		if(!p(n-i)){
			cout << i << ' ' << n-i << endl;
			break;
		}
	}


}
