// https://codeforces.com/contest/460/problem/A
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
using namespace std;

int main(void){
    int n,m, c=0;
    cin >> n >> m;
    int k = m;
    for(int i=n;i>0;i--){
        n--;
        c++;
        k--;
        if(k == 0){
            k = m;
            i++;
        }
    }
    cout << c << endl;
}
