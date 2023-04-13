//https://codeforces.com/contest/1313/problem/A
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(void){
    int n, arr[3];
    cin >> n;
    while(n--){
        int s = 0;
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr, arr+3, greater<int>());
        for(int i=0;i<3;i++){
            for(int j=i;j<3;j++){
                if(i==j && arr[i]){
                    s++;
                    arr[i]--;
                    // cout << arr[0] << arr[1] << arr[2] << endl;
                    continue;
                }
                if(arr[i] && arr[j]){
                    arr[i]--;
                    arr[j]--;
                    s++;
                    // cout << arr[0] << arr[1] << arr[2] << endl;
                }
            }
        }
        if(arr[0] && arr[1] && arr[2]){
            s++;
        }
        cout << s << endl;

    }
}
