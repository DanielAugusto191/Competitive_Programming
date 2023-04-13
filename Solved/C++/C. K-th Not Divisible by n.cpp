// https://codeforces.com/contest/1352/problem/C
#include <bits/stdc++.h>
#include <iomanip>
 
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
        int n,k;
        cin >> n >> k;
        int i = (k/(n-1));
        int r = (i*n) + (k%(n-1));
        if(k%(n-1)==0){
            r--;
        }
        cout << r << endl;

 
    }
    return 0;
}
