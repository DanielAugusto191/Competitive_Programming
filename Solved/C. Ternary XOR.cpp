// https://codeforces.com/contest/1328/problem/C
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
typedef long long ll;
using namespace std;

int main(void){
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        string r1, r2;
        r1+='1';
        r2+='1';
        int c = 1;
        for(int i=1;i<n;i++){
            if(c){
                if(s[i] == '1'){
                    r1 += '1';
                    r2 += '0';
                    c=0;
                }
                if(s[i] == '0'){
                    r1 += '0';
                    r2 += '0';
                }
                if(s[i] == '2'){
                    r1 += '1';
                    r2 += '1';
                }
            }else{
                if(s[i] == '1'){
                    r1 += '0';
                    r2 += '1';
                }
                if(s[i] == '0'){
                    r1 += '0';
                    r2 += '0';
                }
                if(s[i] == '2'){
                    r1 += '0';
                    r2 += '2';
                }
            }
        }
        cout << r1 << endl;
        cout << r2 << endl;
        
    }

    return 0;
}
