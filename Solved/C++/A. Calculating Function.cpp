// https://codeforces.com/contest/486/problem/A
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
    ll n;
    cin >> n;
    if(n%2==0){
        cout << n/2 << endl;
    }else{
        cout << ((n+1)/2)*-1 << endl;
    }
    exit(0);
}
