// https://codeforces.com/contest/1335/problem/B
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
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        int sa = a, sb = b;
        int c = 97;
        string s = "";
        for(int i=0;i<n;i++){
            char ch = c;
            s+=ch;
            a--;
            b--;
            if(b>0){
                c++;
            }
            if(a == 0){
                b = sb;
                a = sa;
                c = 97;
            }

        }
        cout << s << endl;
    }
}
