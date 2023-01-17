// https://codeforces.com/contest/978/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(void){
    _
    int t;cin>>t;
    string x;cin>>x;
    int cnt = 0, ans =0 ;
    for(int i=0;i<t;i++){
        if(x[i] == 'x') cnt++; else cnt = 0;
        if(cnt == 3){
            ans++;
            cnt--;    
        }
    }
    cout << ans << endl;
    exit(0);
}

