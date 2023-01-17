// https://codeforces.com/contest/1241/problem/A
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

int misterio(int k) {
    // printf("%d\n", k);
    if(k <= 1)
    return k;
    int ajuste = k%2;
    return k + misterio( (k + ajuste)/2 );
}

int main(void){
    int n;cin>>n;
    while(n--){
        int x;cin>>x;
        if(x==2){
            cout << 2 << endl;
            continue;
        }
        cout << x%2 << endl;
    }
    return 0;
}
