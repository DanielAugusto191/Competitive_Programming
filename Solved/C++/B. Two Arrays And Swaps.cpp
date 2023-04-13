// https://codeforces.com/contest/1353/problem/B
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
    int t; 
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n], arr2[n];
        read(arr,n);
        read(arr2,n);
        sort(arr, arr+n);
        sort(arr2, arr2+n, greater<int>());
        for(int i=0;i<n && k;i++){
            if(arr2[i] > arr[i]){
                arr[i] = arr2[i];
                k--;
            }
        }
        int s = 0;
        for(int i=0;i<n;i++){
            s+=arr[i];
        }
        cout << s << endl;
        
    }
    return 0;
}
