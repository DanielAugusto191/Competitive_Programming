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
	    char arr[n][n];
        vector<ii> p;
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j){
                cin >> arr[i][j];
                if(arr[i][j] == '*'){
                    p.pb({i,j});
                }
            }
        
        if(p[1].first == p[0].first){
            if(p[1].first-1 >= 0){
                arr[p[1].first-1][p[1].second] = '*';
                arr[p[0].first-1][p[0].second] = '*';
            }else if(p[1].first+1 < n){
                arr[p[1].first+1][p[1].second] = '*';
                arr[p[0].first+1][p[0].second] = '*';
            }
        }else if(p[1].second == p[0].second){
            if(p[0].second-1 >= 0){
                arr[p[0].first][p[0].second-1] = '*';
                arr[p[1].first][p[0].second-1] = '*';
            }else if(p[0].second+1 < n){
                arr[p[0].first][p[0].second+1] = '*';
                arr[p[1].first][p[0].second+1] = '*';
            }
        }else{
            if(arr[p[1].first][p[0].second] == '.'){
                arr[p[1].first][p[0].second] = '*';
            }
            if(arr[p[0].first][p[1].second] == '.'){
                arr[p[0].first][p[1].second] = '*';
            }
        }
        // cout << "teste " << t  << endl;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cout << arr[i][j];
            }
            cout << endl;
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

