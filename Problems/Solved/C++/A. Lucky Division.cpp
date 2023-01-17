// https://codeforces.com/contest/122/problem/A
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef long long ll;
using namespace std;

int it47(string s){
    bool ans = 1;
    for(int i=0;i<s.size();i++){
        if(s[i] != '4' && s[i] != '7'){
            ans = 0;
            break;
        }
    }
    return ans;
}

int main(void){
    int n;
    cin >> n;
    string s = to_string(n);
    if(it47(s)){
        cout << "YES" << endl;
        exit(0);
    }
    int div[12] = {4,7,47,74,444,447,474,477,744,747,774,777};
    for(int i=0;i<12;i++){
        if(n%div[i] == 0){
            cout << "YES" << endl;
            exit(0);
        }
    }
    cout << "NO" << endl;

    
    exit(0);
}
