// https://codeforces.com/contest/500/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;};cout << endl;
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){
    int n,x;cin>>n>>x;
    vector<int> c(n);
    for(int i=0;i<n-1;++i){
        int k;cin >> k;
        c[i+1] = i+1+k;
    }
    int ans = 1;
    while(ans < x) ans = c[ans]; if(ans == x) cout << "YES" << endl;else cout << "NO" << endl;


}
