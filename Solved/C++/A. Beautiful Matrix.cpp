// https://codeforces.com/contest/263/problem/A
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
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int a;
            cin >> a;
            if(a){
                cout << abs(3-(i+1)) + abs(3-(j+1)) << endl;
                exit(0);
            }
        }
    }
    exit(0);
}
