// https://codeforces.com/contest/1398/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){
    int t;cin >> t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        read(arr, n);
        if(arr[n-1] >= arr[0]+arr[1]) cout << 1 << ' ' << 2 << ' ' << n << endl; else cout << -1 << endl;
    }
    return 0;
}
