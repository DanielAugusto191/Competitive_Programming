// https://codeforces.com/contest/1520/problem/C
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
	while(t--){
		int n;cin>>n;
		if(n == 1) {cout << 1 << endl;continue;}
		else if(n == 2) {cout << -1 << endl;continue;}
		int k = 0;
		for(int i=0;i<n*n;++i){
			if(!(i%2)){
				cout << i+1;
				k++;
				if(k==n){cout << endl; k =0;} else cout << ' ';
			}
		}
		for(int i=0;i<n*n;++i){
			if(i%2){
				cout << i+1;
				k++;
				if(k==n){cout << endl; k=0;} else cout << ' ';
			}
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

