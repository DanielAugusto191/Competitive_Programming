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
          vector<int> arr(n), resp;
          for(auto e: arr) cin >> e;
          for(int i=0;i<n;++i){
               int a = arr[i];
               resp.pb(0);
               if(a >= i+1) idx = i; 
               else
               for(int j=resp.size()-1;j>=0 && a;j--, a--){
                    resp[j] = 1;
                    if(j == idx){
                         idx = i;
                         break;
                    }
                    if(a < arr[j]) {
                         break;
                    }

               }
          }
          for(int i=0;i<=idx;i++) cout << 1 << ' ';
          for(int i=idx+1;i<n;i++) cout << resp[i] << ' ';
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

