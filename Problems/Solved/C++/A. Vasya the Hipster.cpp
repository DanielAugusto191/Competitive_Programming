// https://codeforces.com/contest/581/problem/A
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
    int a,b;
    cin >> a >> b;
    cout << min(a,b) << ' ';
    cout << (max(a,b)-min(a,b))/2 << endl;
    return 0;
}
