// https://codeforces.com/contest/1272/problem/A
#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
typedef unsigned long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
using namespace std;

int main(void){
    int q; cin >> q;
    while(q--){
        vector<int> arr(3); read(arr, 3);
        vector<int> a = {arr[0]-1, arr[0], arr[0]+1},b = {arr[1]-1, arr[1], arr[1]+1},c = {arr[2]-1, arr[2], arr[2]+1};
        ll ans = LINF;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    ll l = abs(a[i]-b[j])+abs(a[i]-c[k])+abs(b[j]-c[k]);
                    ans = min(ans, l); 
                }
            }
        }
        cout << ans << endl;
    }
    


    return 0;
}
