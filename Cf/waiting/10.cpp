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
        int n;cin>>n;
        map<int, int> l;
        vector<int> k;
        while(n--){
            int a;cin>>a;
            k.pb(a);
            l[a]++;
        }
        int c = 1;
        int ans = -1;
        for(auto e: l){
            if(e.second == 1){
                for(int i=0;i<(int)k.size();++i){
                    if(k[i] == e.first){
                        ans = i+1;
                        break;
                    }
                }
                break;
            }
            c++;
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

