//https://codeforces.com/contest/1249/problem/B1
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << endl;
using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int arr[x];
        for(int i=0;i<x;i++) cin>>arr[i];

        for(int i=0;i<x;i++){
            int a = arr[i];
            int b = arr[i];
            int c = 0;
            for(int j=0;j<x;j++){
                a = arr[a-1];
                c++;
                if(a==b){
                    break;
                }
            }
            cout << c << ' ';
        }
        cout << endl;

    }
    
    return 0;

}
