// https://codeforces.com/contest/379/problem/A
#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
using namespace std;

int f(int a, int b, int p){
    int ans = p ? 0:a;
    int r =0;
    while(b <= a){
        r += a%b;
        a = (int)(a/b);
        ans += a;
    }
    r += a;
    if(r >= b){
        return ans + f(r, b, 1);
    }else{
        return ans;
    }
}

int main(void){
    int a,b;
    cin >> a >> b;
    cout << f(a, b, 0) << endl;
    return 0;
}
