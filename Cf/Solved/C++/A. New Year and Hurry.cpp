// https://codeforces.com/contest/750/problem/A
#include <bits/stdc++.h>
#include <iomanip>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
using namespace std;
 
int main(void){
    int n,k,i;cin >> n >> k;
    for(i=1;i<=n;i++){
        k += (i)*5;
        if(k > 240){
            --i;
            break;
        }
    }
    if(i == ++n){
        --i;
    }
    cout << i << endl;
    return 0;
}
