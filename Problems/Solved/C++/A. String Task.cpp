// https://codeforces.com/contest/118/problem/A
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
    char arr[12] = {'A', 'a', 'O', 'o', 'Y', 'y', 'E', 'e', 'U', 'u', 'I', 'i'};
    for(int i=0;i<s.size();i++){
        int ans = 1;
        for(int j=0;j<12;j++){
            if(s[i]==arr[j]){
                ans = 0;
                break;
            }
        }
        if(ans){
            cout << '.';
            int a = s[i];
            if(a >= 65 && a <= 90){
                char b = a+32;
                cout << b;
            }else{
                cout << s[i];
            }
        }
    }
    cout << endl;
    exit(0);
}
