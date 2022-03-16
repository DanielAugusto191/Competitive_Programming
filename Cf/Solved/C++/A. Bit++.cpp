// https://codeforces.com/contest/282/problem/A
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
    int n, x = 0;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s[0] == '+' || s[2] == '+'){
            x++;
        }else if(s[0] == '-' || s[2] == '-'){
            x--;
        }
    }
    cout << x << endl;
    exit(0);
}
