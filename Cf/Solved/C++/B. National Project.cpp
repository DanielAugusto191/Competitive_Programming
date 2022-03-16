// https://codeforces.com/contest/1303/problem/B
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << endl;
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        long long n,g,b;
        cin >> n >> g >> b;
        long long t = (n+1)/2;
        
        long long r = t/g * (g+b);
        if(t%g == 0){
            r -= b;
        }else{
            r += t%g;
        }
        cout << max(r,n) << endl;

    }
    return 0;

}
