// https://codeforces.com/contest/1/problem/A
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
using namespace std;

int main(void){
    unsigned long long n,m,a;
    cin >> n >> m >> a;
    unsigned long long h = m%a>0 ? (m/a) + 1 : m/a;
    unsigned long long j = n%a>0 ? (n/a) + 1 : n/a;
    unsigned long long hj = h*j;
    cout << hj << endl;
}
