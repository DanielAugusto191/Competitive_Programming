// https://codeforces.com/contest/1472/problem/D
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
		int n;cin>>n;
		int arr[n];
		for(int i=0;i<n;i++) cin >> arr[i];
		sort(arr, arr+n, greater<>());
		int x = 1;
		ll a = 0;
		for(int i=0;i<n;++i){
			if(x){
				if(!(arr[i]%2)) a += arr[i];
			}else
			{
				if(arr[i]%2) a -= arr[i];
			}
			x = !x;
		}
		if(a > 0) cout << "Alice" << endl; else if(a < 0) cout << "Bob" << endl; else cout << "Tie" << endl;
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
 
