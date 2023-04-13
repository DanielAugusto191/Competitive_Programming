// https://codeforces.com/contest/1360/problem/C
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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        int ni=0, np=0;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            arr[i] = x;
            if(x%2==0){
                np++;
            }else{
                ni++;
            }
        }
        if(np%2==0 && ni%2==0){
            cout << "YES" << endl;
            continue;
        }
        sort(arr, arr+n);
        int k = 0;
        for(int i=1;i<n;i++){
            if(arr[i] == arr[i-1]+1){
                k=1;
                break;
            }
        }
        if(k){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
// 0 2
// 1 4
// 2 4
// 3 6
// 4 6
// 5 7
// 6 8
