// https://codeforces.com/contest/1294/problem/C
#include <bits/stdc++.h>
#define endl '\n'
#define all(a) a.begin(),a.end()
#define dbg(a) cout << a << endl;
#define ll long long
using namespace std;

int main(void){
    
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int a=0,b=0,c=0;
        int p = 1;
        for(int i=2;i*i<x;i++){
            if(x%i==0){
                a=i;
                p=0;
                break;
            }
        }
        if(p){
            cout << "NO" << endl;
            continue;
        }
        p=1;
        x /= a;
        for(int i=2;i*i<x;i++){
            if(x%i==0 && i!=a){
                b=i;
                p=0;
                break;
            }
        }
        if(p){
            cout << "NO" << endl;
            continue;
        }
        x /= b;
        if(x != a && x !=b){
            cout << "YES" << endl;
            cout << a <<' '<< b << ' ' << x << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }

    return 0;

}
