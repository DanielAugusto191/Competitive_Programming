// https://codeforces.com/contest/61/problem/A
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
    string n,m;
    cin >> n >> m;
    for(int i=0;i<n.size();++i){
        if((n[i]-'0') ^ (m[i]-'0')){
            cout << '1';
        }else{
            cout << '0';
        }
    }
    cout << endl;
    return 0;
}

