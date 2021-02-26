// https://codeforces.com/contest/1294/problem/A
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,n;
        cin >> a >> b >> c >> n;
        int x;
        x = max(a,max(b,c));
        int f = 0;
        if(x==a){
            f += (a-b) + (a-c);
            b += (a-b);
            c += (a-c);
        }else if(x==b){
            f += (b-a) + (b-c);
            a += (b-a);
            c += (b-c);
        }else if(x==c){
            f += (c-a) + (c-b);
            a += (c-a);
            b += (c-b);
        }
        if(n<f){
            cout << "NO" << endl;
        }else if(n==f){
            cout << "YES" << endl;
        }else{
            if((n-f) % 3 == 0){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
        
    }
    return 0;
}
