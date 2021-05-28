// https://codeforces.com/contest/579/problem/A
#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
typedef unsigned long long ll;
using namespace std;

int nb(int n){
    if(n <= 0) return 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        int a = 1 << i;
        if(a > n)break;
        ans = a;
    }
    return 1+nb(n-ans);

}

int main(void){
    int n;cin>> n;
    cout << nb(n) <<endl;
    return 0;
}
