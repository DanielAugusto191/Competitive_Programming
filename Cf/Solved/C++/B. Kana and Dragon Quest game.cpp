// https://codeforces.com/contest/1337/problem/B
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
    int t;
    cin >> t;
    while(t--){
        int x,n,m;
        cin >> x >> n >> m;
        int k = 10*m;
        while(k < x && n>0){
            x = floor(x/2)+10;
            n--;
        }
        if(x <= k){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
