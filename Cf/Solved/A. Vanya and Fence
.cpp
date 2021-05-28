// https://codeforces.com/contest/677/problem/A
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
    int t,h;
    cin >> t >> h;
    int arr[t];
    read(arr, t);
    int c = 0;
    for(int i=0;i<t;i++){
        if(arr[i] > h){
            c+=2;
        }else{
            c++;
        }
    }
    cout << c << endl;
}
