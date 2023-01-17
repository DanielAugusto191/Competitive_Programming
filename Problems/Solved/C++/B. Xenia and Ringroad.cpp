// https://codeforces.com/contest/339/problem/B
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
    int n,m;
    cin >> n >> m;
    int arr[m];
    read(arr, m);
    ll x = arr[0]-1;
    for(int i=1;i<m;i++){
        if(arr[i] < arr[i-1]){
            x += (n-arr[i-1])+arr[i];
        }else{
            x += arr[i]-arr[i-1];
        }
    }
    cout << x << endl;
}
