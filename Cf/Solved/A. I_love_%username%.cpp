// https://codeforces.com/contest/155/problem/A
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
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    int mm = arr[0];
    int ma = arr[0];
    int c=0;
    for(int i=1;i<n;i++){
        cin >> arr[i];
        if(arr[i] > ma){
            c++;
            ma = arr[i];
        }else if(arr[i] < mm){
            c++;
            mm = arr[i];
        }
    }
    cout << c << endl;
    return 0;
}
