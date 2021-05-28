// https://codeforces.com/contest/1409/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(void){
    int t;cin>>t;
    while(t--){
        ll a,b,x,y,n;cin>>a>>b>>x>>y>>n;
        ll da, db;
        da = max(x, a-n);
        db = max(y, b-n);
        if(da > db){
            n -= b-db;
            b = db;
            a = max(x, a-n);
        }else{
            n -= a-da;
            a = da;
            b = max(y, b-n);
        }
        cout << a*b*1ll << endl;

    }
    

    exit(0);
}

