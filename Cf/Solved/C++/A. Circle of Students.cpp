// https://codeforces.com/contest/1203/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int arr[210];

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int m = -INF, mm = INF;
		ii pm = {0,0}; // maior, menor
		for(int i=0;i<n;++i) {
			cin >> arr[i];
			if(arr[i] > m) m = arr[i], pm.first = i;
			if(arr[i] < mm) mm = arr[i], pm.second = i;	
		}
		int ans = 1;
		for(int i=0;i<n-1;++i){
			if(arr[pm.first] < arr[(pm.first+1)%n]){
				ans = 0;
				break;
			}
			pm.first = (pm.first + 1)%n;
		}
		if(ans) {cout << "YES" << endl;continue;}
		for(int i=0;i<n-1;++i){
			if(arr[pm.second] > arr[(pm.second+1)%n]){
				ans = 1;
				break;
			}
			pm.second = (pm.second + 1) % n;
		}
		if(ans) cout << "NO" << endl;
		else cout << "YES" << endl;
	}		
	exit(0);
}