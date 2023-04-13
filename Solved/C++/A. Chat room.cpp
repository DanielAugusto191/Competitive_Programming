// https://codeforces.com/contest/58/problem/A
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
    string s;
    cin >> s;
    char arr[5] = {'h', 'e', 'l', 'l', 'o'};
    int l = 0;
    for(int i=0;i<s.size();i++){
        if(s[i] == arr[l]){
            l++;
            if(l==5){
                break;
            }
        }
    }
    if(l==5){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    exit(0);
}
