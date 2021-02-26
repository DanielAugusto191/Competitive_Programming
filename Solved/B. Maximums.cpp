// https://codeforces.com/contest/1326/problem/B
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
    int n;
    cin >> n;
    int arr[n];
    read(arr, n);
    int s = 0;
    for(int i=0;i<n;i++){
        s+=arr[i];
        cout << s << ' ';
        if(arr[i] < 0){
            s+= arr[i]*-1;
        }
    }
    cout << endl;
}
