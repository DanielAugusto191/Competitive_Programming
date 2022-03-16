// https://codeforces.com/contest/1333/problem/A
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef long long ll;
using namespace std;


int main(void){
    int t;
    cin >> t;
    while(t--){
        int n,m; cin >> n >> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0){
                    cout << 'B';
                    continue;
                }else if(j == m-1){
                    cout << 'B';
                    continue;
                }
                cout << 'W';
            }
            cout << endl;
        }
    }
}
