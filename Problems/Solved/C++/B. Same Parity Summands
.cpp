// https://codeforces.com/contest/1352/problem/B
#include <bits/stdc++.h>
#include <iomanip>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
using namespace std;
 
int main(void){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        if((n-(k-1)) % 2 == 1){
            cout << "YES" << endl;
            for(int i=0;i<k-1;i++){
                cout << '1' << ' ';
            }
            cout << n-(k-1) << endl;
        }else{
            if((n-2*(k-1)) % 2 == 0 && (n-2*(k-1)) >= 2)  {
                cout << "YES" << endl;
                for(int i=0;i<k-1;i++){
                    cout << '2' << ' ';
                }
                cout << n-2*(k-1) << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}



                
