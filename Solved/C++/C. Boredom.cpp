// https://codeforces.com/contest/456/problem/C
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
    int n;cin>>n;

    map<int,int> m;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        m[x]++;
    }
    if(m.size() == 1){
        cout << 1LL * m.begin()->first * m.begin()->second << endl;
        return 0;
    }
    unsigned long long arr[n+2];
    arr[0] = 0; arr[1] = m[1];
    for(int i=2;i<n+1;i++){
        arr[i] = max(arr[i-1], 1LL * (1LL * arr[i-2] + 1LL * m[i]*i));
    }
    cout << arr[n] << endl;

    return 0;
 
}
