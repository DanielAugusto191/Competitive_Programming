// https://codeforces.com/contest/1296/problem/A
#include <bits/stdc++.h>
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
        int n;
        cin >> n;
        int arr[n];
        read(arr, n);
        int k = 0;
        int e = 0,o = 0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                e++;
            }else{
                o++;
            }
        }
        if(o%2==1){
            cout << "YES" << endl;
        }else if(e>0 && o>0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }
    return 0;
}
