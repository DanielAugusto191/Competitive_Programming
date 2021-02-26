// https://codeforces.com/contest/466/problem/A
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
    int n,m,a,b;cin>>n>>m>>a>>b;

    if(b < a*m){
        int k = n/m * b;
        if(n%m > 0){
            if(b < (n%m) * a){
                k+=b;
            }else{
                k+= (n%m)*a;
            }
        }
        cout << k << endl;

    }else{
        cout << n*a << endl;
    }

    return 0;
}
