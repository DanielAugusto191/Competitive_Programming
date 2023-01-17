// https://codeforces.com/contest/148/problem/A
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
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    set<int> s;
    for(int i=k;i<=d;i+=k){
        s.insert(i);
    }
    for(int i=l;i<=d;i+=l){
        s.insert(i);
    }
    for(int i=m;i<=d;i+=m){
        s.insert(i);
    }
    for(int i=n;i<=d;i+=n){
        s.insert(i);
    }
    cout << s.size() << endl;
    return 0;
}
