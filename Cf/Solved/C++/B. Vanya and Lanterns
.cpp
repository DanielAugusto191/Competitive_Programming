// https://codeforces.com/contest/492/problem/B
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
    int n,l;
    cin >> n >> l;
    int arr[n];
    read(arr, n);
    sort(arr, arr+n);
    int k = 0;
    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1] > k){
            k = arr[i]-arr[i-1];
        }
    }
    float x = arr[0];
    float y = l-arr[n-1];
    cout << setprecision(10);
    cout << max(k/2.0, max(x,y)*1.0) << endl;
    return 0;
}
