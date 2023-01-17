// https://codeforces.com/contest/1536/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int t;cin>>t;
	vector<int> pref(1e3), v(1e3);
	while(t--){
		int n;cin>>n;
		int m = -1;
		int ans = 1;
		for(int i=0;i<n;++i){
			int x;cin>>x;
			if(x < 0) ans = 0;
			m = max(m, x);
		}
		if(ans){
			cout << "Yes" << endl;
			cout << m+1 << endl;
			for(int i=0;i<m+1;i++) cout << i << ' ';
			cout << endl;
		}else{
			cout << "No" << endl;
		}
	}
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

