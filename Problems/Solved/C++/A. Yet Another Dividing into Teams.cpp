// https://codeforces.com/contest/1249/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define dbg(a) cout << a << endl;

int main(void){
    int n;
    cin >> n;
    while(n--){
        int k;
        cin >> k;
        int arr[k];
        for(int i=0;i<k;i++) cin >> arr[i];
        sort(arr, arr+k);
        int i;
        for(i=1;i<k;i++){
            if(arr[i] == arr[i-1]+1){
                cout << 2 << endl;
                break;
            }
        }
        if(i==k){
            cout << 1 << endl;
        }

    }
    return 0;
}
