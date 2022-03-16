// https://codeforces.com/contest/1385/problem/A
#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
typedef unsigned long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
using namespace std;


int main(void){
    int t;cin>> t;
    while(t--){
        int a,b,c;cin>>a>>b>>c;
        int k = max(a,max(b,c));
        int l = min(a,min(b,c));
        int p = 0;
        if(a == k)p++;
        if(b == k)p++;
        if(c == k)p++;
        if(p < 2){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        cout << k << ' ' << l << ' ' << 1 << endl;
    }
    


    return 0;
}
