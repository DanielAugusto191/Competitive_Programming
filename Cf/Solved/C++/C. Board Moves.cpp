// https://codeforces.com/contest/1353/problem/C
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
        ll n;
        cin >> n;
        if(n==1){
            cout << 0 << endl;
            continue;
        }
        ll s = 0;
        for(ll i=1;i<=(n-1)/2;i++){
            s+=i*(i*8);
        }
        cout << s << endl;

        
    }
    return 0;
}
