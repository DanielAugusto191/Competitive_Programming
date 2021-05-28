// https://codeforces.com/contest/919/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n,m,k;cin>>n>>m>>k;
	int ans = 0;
	vector<vector<char> > v(n, vector<char>(m));
	for(int i=0;i<n;++i) for(int j=0;j<m;++j){cin >> v[i][j];if(k==1 && v[i][j] == '.') ans++;}
	if(k==1){cout << ans << endl; exit(0);}
	for(int i=0;i<n;++i){
		int l = 0;
		for(int j=0;j<m;j++){
			if(v[i][j] == '*'){l =0; continue;}
			l++;
			if(l >= k) ans++;
		}
	}
	for(int j=0;j<m;j++){
		int l = 0;
		for(int i=0;i<n;++i){
			if(v[i][j] == '*'){l=0;continue;}
			l++;
			if(l >= k) ans++;
		}
	}
	cout << ans << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        


