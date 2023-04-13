// https://codeforces.com/contest/705/problem/A
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
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        if(i == n-1 && n%2==1){
            cout << "I hate it";
            break;
        }else if(i == n-1 && n%2==0){
            cout << "I love it";
            break;
        }
        if(i%2==0){
            cout << "I hate that ";
        }else{
            cout << "I love that ";
        }
    }
    cout << endl;
    exit(0);
}
