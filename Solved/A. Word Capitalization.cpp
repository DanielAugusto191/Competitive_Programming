// https://codeforces.com/contest/281/problem/A
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
    string s;
    cin >> s;
    if(s[0] >= 97 && s[0] <= 122){
        int a = s[0];
        a -= 32;
        char b = a;
        s[0] = b;
    }
    cout << s << endl;

    exit(0);
}
