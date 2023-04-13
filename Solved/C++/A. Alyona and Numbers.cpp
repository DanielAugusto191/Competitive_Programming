// https://codeforces.com/contest/682/problem/A
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
typedef long long ll;
using namespace std;
 
int main(void){
    int n,m;
    cin >> n >> m;
    int xs[5] = {0};

    ll c =0, t=0;
    for(int k=1;k<= min(n, 5);k++){
        c = 0;
        for(int i=1;5*i-k <= m;i++){
            if(5*i-k == 0){
                continue;
            }
            t++;
            c++;
        }
        xs[k-1] = c;
    }
    int q =0;
    for(int i=0;i<n%5;i++){
        q+= xs[i];
    }
    ll r = n>5 ? (n/5) * t + q : t;
    cout << r << endl;
}
