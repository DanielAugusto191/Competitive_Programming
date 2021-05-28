// https://codeforces.com/contest/189/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){
    int n,a,b,c;cin>>n>>a>>b>>c;
    int res = 0;
    for(int i=0;i<=n/a;i++){
        for(int j=0;j<=(n-i*a)/b;j++){
            int z = ((n-a*i)-b*j);
            if(z%c == 0){
                z /= c;
                res = max(res, i+j+z);
            }
        }   
    }
    cout << res << endl;
}
 
