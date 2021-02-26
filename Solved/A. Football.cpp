// https://codeforces.com/contest/96/problem/A
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
    char ant = s[0];
    int c = 1;
    for(int i=1;i<s.size();i++){
        char at = s[i];
        if(ant != at){
            c = 1;
        }else{
            c++;
            if(c == 7){
                break;
            }
        }
        ant = at;
    }
    if(c==7){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    exit(0);
}
