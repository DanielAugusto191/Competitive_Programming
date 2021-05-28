// https://codeforces.com/contest/1324/problem/C
#include <bits/stdc++.h>
#define endl '\n'
#define all(a) a.begin(),a.end()
#define dbg(a) cout << a << endl;
#define ll long long
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int soma = 0;
        int m = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'L'){
                soma++;
            }else{
                m = max(m, soma);
                soma = 0;
            }
        }
        m = max(m, soma);
        cout << m+1 << endl;
        
    }

    return 0;

}
