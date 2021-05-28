// https://codeforces.com/contest/69/problem/A
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
    int xt = 0,yt = 0,zt = 0;
    while(n--){
        int x,y,z;
        cin >> x >> y >> z;
        xt+=x;
        yt+=y;
        zt+=z;
    }
    if(xt ==0 && yt == 0 && zt == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    exit(0);
}
