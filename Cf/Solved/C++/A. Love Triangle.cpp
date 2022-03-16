// https://codeforces.com/contest/939/problem/A
#include <bits/stdc++.h>
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
    for(int i=0;i<n;i++){
        vector<int> v;
        int x = arr[i];
        v.push_back(x);
        int k =1;
        while(1){
            x = arr[x-1];
            if(v[0] == x || k > 3){
                break;
            }
            v.push_back(x);
            k++;
        }
        if(k==3){
            cout << "YES" << endl;
            // Adbg(v);
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
