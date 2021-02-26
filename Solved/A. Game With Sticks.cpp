// https://codeforces.com/contest/451/problem/A
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
using namespace std;
 
int main(void){
    int n,m;
    cin >> n >> m;
    if(n==1 || m==1){
        cout << "Akshat" << endl;
        return 0;
    }
    bool ans = false;
    int p = n*m;
    while(n>0 && m>0){
        p -= n+m-1;
        --n;
        --m;
        ans = !ans;
    }
    if(ans == 0){
        cout << "Malvika" << endl;
    }else{
        cout << "Akshat" << endl;
    }

    return 0;
}
