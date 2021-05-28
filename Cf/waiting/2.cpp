// 
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
       	int idx =-1;
       	int n;cin>>n;
       	vector<int> arr(n), resp(n,0);
       	for(int i=0;i<n;++i) cin >> arr[i];
		for(int i=n-1;i>=0;i--){
			int k = max(0, arr[i]);
			if(k) resp[i] = 1;
		}
		for(auto &e: resp) cout << e << ' ';
        cout << endl;
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

