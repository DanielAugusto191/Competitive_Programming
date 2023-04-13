// https://codeforces.com/contest/1374/problem/A
#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int x,y,n,ans=0;cin>>x>>y>>n;
        int k = n%x;
        if(k < y){
            ans = k+x-y;
        }else if(k > y){
            ans = k-y;
        }
        cout << n-ans << endl;
    }

    return 0;
}
