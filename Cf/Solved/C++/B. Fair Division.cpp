// https://codeforces.com/contest/1472/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[3] = {0,0, 0};
		for(int i=0;i<n;i++){
			int k; cin>> k;
			a[k]++;
		}
		if(!a[1]){
			if(!(a[2]%2)){
				cout << "YES" << endl;
			}else cout << "NO" << endl;
			continue;
		}
		if(!a[2]){
			if(!(a[1]%2)) cout << "YES" << endl; else cout << "NO" << endl;
			continue;
		}
		if(a[1] && a[1]%2) cout << "NO" << endl; else cout << "YES" << endl;
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


