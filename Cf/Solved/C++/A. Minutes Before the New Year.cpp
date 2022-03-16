// https://codeforces.com/contest/1283/problem/A
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
        int n,m;
        cin >> n >> m;
        int k = (23-n)*60 + (60-m);
        cout << k << endl;
    }
    return 0;
}
