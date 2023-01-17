// https://codeforces.com/contest/1324/problem/A
#include <bits/stdc++.h>
#define endl '\n'
#define all(a) a.begin(),a.end()
#define dbg(a) cout << a << endl;
#define ll long long
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int arr[x];
        int s=0;
        for(int i=0;i<x;i++){cin >> arr[i]; s+=arr[i];}
        int p = *min_element(arr, arr+x);
        for(int i=0;i<x;i++){
            arr[i] -= p;
        }
        int h = 0;
        for(int i=0;i<x;i++){
            if(arr[i]%2==1){
                h=1;
                break;
            }
        }
        if(h){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
    }

    return 0;

}
