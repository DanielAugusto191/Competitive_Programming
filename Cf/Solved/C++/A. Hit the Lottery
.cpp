// https://codeforces.com/contest/996/problem/A
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
    int n; cin >> n;
    int m[5] = {100, 20, 10, 5, 1};
    int s = 0;
    for(int i=0;i<5;i++){
        int x = n/m[i];
        n -= m[i]*x;
        s+=x;
    }
    cout << s << endl;
 
    return 0;
}
