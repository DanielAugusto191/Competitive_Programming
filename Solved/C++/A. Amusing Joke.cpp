// https://codeforces.com/contest/141/problem/A
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
    string s,t,x;
    cin >> s >> t >> x;
    string k = s+t;
    sort(k.begin(),k.end());
    sort(x.begin(),x.end());
    if(k == x){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    

    return 0;
}

