// https://codeforces.com/contest/1472/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int t;cin>>t;
	while(t--){
		int w,h,n;cin>>w>>h>>n;
		int p = 1;
		while(!(h%2)){
			p *= 2;
			h /= 2;
		}
		while(!(w%2)){
			p *= 2;
			w /= 2;
		}
		if(p >= n) cout << "YES" << endl; else cout << "NO" << endl;
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


