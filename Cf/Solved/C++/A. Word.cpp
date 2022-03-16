// https://codeforces.com/contest/59/problem/A
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef long long ll;
using namespace std;

bool fc(pair<int, int> a, pair<int,int> b){
    return a.second > b.second;
}

int main(void){
    string s;
    cin >> s;
    int r1=0,r2=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == tolower(s[i])){
            r2++; // lower
        }else{
            r1++; // Upper
        }
    }
    if(r1 > r2){
        for(int i=0;i<s.size();i++){
            cout << (char)toupper(s[i]);
        }
        cout << endl;
    }else{
        for(int i=0;i<s.size();i++){
            cout << (char)tolower(s[i]);
        }
        cout << endl;
    }
    exit(0);
}
