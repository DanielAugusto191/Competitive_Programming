// https://codeforces.com/contest/1296/problem/B
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
    cin >> t;
    while(t--){
        int s;
        cin >> s;
        int x = -1;
        int atual = s;
        int total = 0;
        while(x){
            x = (atual/10)*10;
            total+=x;
            atual = atual-x + x/10;
        }
        total += atual;
        cout << total <<endl;
    }

    return 0;
}
