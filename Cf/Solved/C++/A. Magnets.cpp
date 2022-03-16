// https://codeforces.com/contest/344/problem/A
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
    int n,c=1;
    cin >> n;
    char p = '2';
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(p == s[0]){
            c++;
        }
        p = s[1];
    }
    cout << c << endl;
    exit(0);
}
