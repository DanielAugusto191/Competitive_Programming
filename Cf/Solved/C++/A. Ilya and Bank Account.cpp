// https://codeforces.com/contest/313/problem/A
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
    int x;cin >> x;
    if(x>=0){
        cout << x << endl;
        return 0;
    }
    string s = to_string(x), k, l;
    for(int i=1;i<s.size()-1;++i){
        k+=s[i];
    }
    for(int i=1;i<s.size();++i){
        if(i == s.size()-2){
            continue;
        }
        l+=s[i];
    }
    int y = stoi(k), z=stoi(l);
    cout << -1*min(y,z) << endl;

    return 0;
}

