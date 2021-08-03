// https://codeforces.com/contest/1549/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
int mdc(int a, int b) {return b==0 ? a : mdc(b, a%b);}
typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string arr, arr2;
		cin >> arr2;
		cin >> arr;

		int ans = 0;
		for(int i=0;i<n;++i){
			if(arr[i] == '1'){
				if(arr2[i] == '0') ans++;
				else{
					if(i > 0 && arr2[i-1] == '1') ans++;
					else if(i < n-1 && arr2[i+1] == '1'){ans++; arr2[i+1] = 2;}
				}
			}
		}
		cout << ans << endl;
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

