// https://codeforces.com/contest/208/problem/A
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
    string s,k;
    cin >> s;
    int e = 0;
    for(int i=0;i<s.size();i++){

        if(s[i] == 'W' && i+2 < s.size()){
            if(s[i+1] == 'U' && s[i+2] == 'B'){
                e=1;
                s[i] = s[i+1] = s[i+2] = '@';
            }
        }
        if(e){
            if(!k.empty() && k[k.size()-1] != ' '){
                k+=' ';
            }
            e=0;
        }
        if(s[i] != '@'){
            k+=s[i];
        }
    }
    cout << k << endl;
    return 0;
}
