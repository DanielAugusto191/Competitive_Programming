// https://codeforces.com/contest/1213/problem/B
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
    int t;cin>>t;
    while(t--){
        int n,ans = 0;cin>>n;
        int arr[n]; read(arr, n);
        int mm = INF;
        for(int i=n-1;i>=0;i--){
            if(arr[i] > mm) ans++;
            mm = min(arr[i], mm);
        }
        cout << ans << endl;
    }
    return 0;
}
