// https://codeforces.com/contest/1328/problem/A
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
typedef long long ll;
using namespace std;
 
int main(void){
    
    int t;
    cin >>t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a%b == 0){
            cout << '0' << endl;
            continue;
        }
        int k = b - (a%b);
        cout << k << endl;

    }

    return 0;
}

