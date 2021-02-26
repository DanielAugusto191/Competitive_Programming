// https://codeforces.com/contest/732/problem/A
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
    int k, n;
    cin >> k >> n;
    int i;
    for(i=1;i<=9;i++){
        if((k*i)%10==0 || (k*i - n)%10 == 0){
            break;
        }
    }
    cout << i << endl;
    return 0;
}
