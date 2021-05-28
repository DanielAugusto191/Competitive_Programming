// https://codeforces.com/contest/112/problem/A
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
    string s,m;
    cin >> s >> m;
    for(int i=0;i<s.size();i++){
        int a = s[i],b = m[i];
        if(a >= 65 && a <= 90){
            a+=32;
        }
        if(b >= 65 && b <= 90){
            b+=32;
        }
        if(a > b){
            cout << '1' << endl;
            exit(0);
        }else if(b > a){
            cout << "-1" << endl;
            exit(0);
        }
    }
    cout << '0' << endl;
    exit(0);
}
