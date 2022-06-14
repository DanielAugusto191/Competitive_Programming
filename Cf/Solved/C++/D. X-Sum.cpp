// https://codeforces.com/contest/1676/problem/D
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
	int t;cin>>t;
	while(t--){
		int n,m;cin>>n>>m;
		int arr[n][m];
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j) cin >> arr[i][j];
		}
		int ans = -INF;
		for(int i=0;i<n;++i){
			for(int j=0;j<m;++j){
				int Lans = arr[i][j];
				int di = i+1, dj = j+1;
				while(di < n && dj < m) Lans += arr[di][dj], di++, dj++;
				di = i+1; dj = j-1;
				while(di < n && dj >= 0) Lans += arr[di][dj], di++, dj--;
				di = i-1; dj = j-1;
				while(di >= 0 && dj >= 0) Lans += arr[di][dj], di--, dj--;
				di = i-1; dj = j+1;
				while(di >= 0 && dj < m) Lans += arr[di][dj], di--, dj++;
				ans = max(ans, Lans);
			}
		}
		cout << ans << endl;
	}
	exit(0);
}