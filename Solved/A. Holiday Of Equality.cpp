// https://codeforces.com/contest/758/problem/A
#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
using namespace std;

int main(void){
    int a;cin>>a;
    int arr[a];
    int s = 0;
    for(int i=0;i<a;i++){
        cin >> arr[i];
        s = max(s, arr[i]);
    }
    int t = 0;
    for(int i=0;i<a;i++){
        t+=s-arr[i];
    }
    cout << t << endl;

    return 0;
}
