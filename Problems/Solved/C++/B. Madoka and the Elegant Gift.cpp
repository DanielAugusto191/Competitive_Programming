// https://codeforces.com/contest/1647/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

char arr[100][100];

int main(){_
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				cin >> arr[i][j];
			}
		}
		int c = 1;
		[&]{
			for(int i=0;i<n-1;++i){
				for(int j=0;j<m-1;++j){
					int ans = (arr[i][j] == '1') + (arr[i][j+1] == '1') + (arr[i+1][j] == '1') + (arr[i+1][j+1] == '1');
					if(ans == 3) {c = 0; return;}
				}
			}
		};
		cout << (c?"YES":"NO") << endl;
	}
	exit(0);
}
