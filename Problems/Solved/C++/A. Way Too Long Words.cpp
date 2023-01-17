// https://codeforces.com/contest/71/problem/A
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
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.size() > 10){
            cout << s[0] << s.size()-2 << s[s.size()-1] << endl;
        }else{
            cout << s << endl;
        }
    } 
    exit(0);
}
