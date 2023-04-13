// https://codeforces.com/contest/337/problem/A
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
    sort(arr,arr+m);
    int ma = 1001;
    int j =0;
    for(int i=n-1;i<m;i++){
        ma = min(ma, arr[i]-arr[j]);
        j++;
    }
    cout << ma << endl;
    exit(0);
}
