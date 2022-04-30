// https://codeforces.com/contest/1669/problem/G
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int t;cin >> t;
	while(t--){
		int n,m;cin>>n>>m;
		char arr[n][m];
		for(int i=0;i<n;++i) for(int j=0;j<m;++j) cin >> arr[i][j];
		if(n == 1){
			for(int i=0;i<m;++i){
				cout << arr[0][i];
			}
			cout << endl;
		}else{
			for(int i=n-2;i>=0;--i){
				for(int j=0;j<m;++j){
					if(arr[i][j] == '*'){
						int k = i+1;
						while(k < n && arr[k][j] == '.') ++k;
						arr[i][j] = '.';
						arr[k-1][j] = '*';
					}
				}
			}
			for(int i=0;i<n;++i){
				for(int j=0;j<m;++j){
					cout << arr[i][j];
				}
				cout << endl;
			}
		}
	}
	exit(0);
}