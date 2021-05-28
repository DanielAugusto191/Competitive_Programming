// https://codeforces.com/contest/131/problem/A
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
    int n=0;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i] == toupper(s[i])){
            if(i==0){
                ans=1;
            }
            n++;
        }
    }
    if(n == s.size()){
        cout << (char)tolower(s[0]);
        for(int i=1;i<s.size();i++){
            cout << (char)tolower(s[i]);
        }
        cout << endl;
    }else if (!ans && n == s.size()-1){
        cout << (char)toupper(s[0]);
        for(int i=1;i<s.size();i++){
            cout << (char)tolower(s[i]);
        }
        cout << endl;
    }else{
        cout << s << endl;
    }

    exit(0);
}
