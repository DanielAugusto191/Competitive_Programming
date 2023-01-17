// https://codeforces.com/contest/1538/problem/B
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
		int arr[n];
		int s = 0;
		for(int i=0;i<n;i++){
			cin >> arr[i];
			s += arr[i];
		}
		if(s%n){
			cout << -1 << endl;
		}else{
			int ans = 0;
			int k = s/n;
			for(int i=0;i<n;++i){
				if(arr[i] > k){
					ans++;
				}
			}
			cout << ans << endl;
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

