// https://codeforces.com/contest/266/problem/A
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
    int n,c = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i=1;i<n;i++){
        if(s[i] == s[i-1]){
            c++;
        }
    }
    cout << c << endl;
    exit(0);
}
