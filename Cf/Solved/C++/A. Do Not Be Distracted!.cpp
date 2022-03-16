//https://codeforces.com/contest/1520/problem/A 
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

int arr[26] = {0};

int main(){_
	int t;cin>>t;
	while(t--){
		memset(arr, 0, sizeof(arr));
		int n;cin>>n;
		int ans = 0;
		char ant = ' ';
		for(int i=0;i<n;++i){
			char x;cin>>x;
			if(arr[x-65] == 1){
				if(ant != x){
					ans = 1;
				}
			}else{
				arr[x-65] = 1;
			}
			ant = x;
		}
		if(ans == 0) cout << "YES" << endl; else cout << "NO" << endl;
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

