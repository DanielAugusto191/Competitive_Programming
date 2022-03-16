// https://codeforces.com/contest/432/problem/A
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
    int n,k;cin>>n>>k;
    int arr[n];
    read(arr, n);
    sort(arr, arr+n);
    cout << ((upper_bound(arr, arr+n, 5-k) - arr)) / 3 << endl;
    return 0;
}
