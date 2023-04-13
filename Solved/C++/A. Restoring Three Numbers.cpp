// https://codeforces.com/contest/1154/problem/A
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
    int arr[4];
    read(arr, 4);
    sort(arr, arr+4);
    int i = arr[0]+arr[1]-arr[3];
    cout << i << ' '<< arr[0]-i << ' ' << arr[1]-i << endl;
}
