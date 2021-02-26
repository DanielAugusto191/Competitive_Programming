// https://codeforces.com/contest/1360/problem/D
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
using namespace std;

int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int ans = n;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                if(i<=k){
                    ans = min(ans, n/i);
                }
                if(n/i <= k){
                    ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
