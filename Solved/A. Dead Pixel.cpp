// https://codeforces.com/contest/1315/problem/A
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int m = 0;
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        int mx = 0;
        int my = 0;
        if(x < a/2){
            mx = (x+1)*b;
        }else{
            mx = (a-x)*b;
        }
        if(y < b/2){
            my = (y+1)*a;
        }else{
            my = (b-y)*a;
        }
        cout << a*b - min(mx, my) << endl;

    }
}
