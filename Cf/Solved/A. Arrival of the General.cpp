// https://codeforces.com/contest/144/problem/A
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
    int arr[n];
    read(arr, n);
    int im = 0, m = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > m){
            m = arr[i];
            im = i;
        }
    }
    int mi = 0, mm = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] <= mm){
            mm = arr[i];
            mi = i;
        }
    }
    if(im < mi){
        cout << im + ((n-1)-mi) << endl;
    }else{
        cout << (im + ((n-1)-mi) - 1) << endl;
    }
    
    return 0;
}
