// https://codeforces.com/contest/1367/problem/A
#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
typedef unsigned long long ll;
using namespace std;
 
int main(void){
    int t;cin>> t;
    for(int j=0;j<t;j++){
        string s;cin>>s;
        string k = ""; k += s[0]; k += s[1];
        for(int i=3;i<s.size();i+=2) k += s[i];
        cout << k << endl;
    }
    return 0;
}
