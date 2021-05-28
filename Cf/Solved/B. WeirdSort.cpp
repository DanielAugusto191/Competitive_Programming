// https://codeforces.com/contest/1311/problem/B
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << endl;
using namespace std;

int main(void){
    
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        int arr[n], p[m];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        for(int i=0;i<m;i++){
            cin >> p[i];
        }
        int i=0;
        for(i=0;i<n;i++){
            int j = 0;
            for(j=0;j<n-i-1;j++){
                if(arr[j] > arr[j+1]){
                    int x =0;
                    for(int k=0;k<m;k++){
                        if(p[k] == j+1){
                            x++;
                        }
                    }
                    if(!x){
                        cout << "NO" << endl;
                        break;
                    }
                    int aux = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = aux;
                }
            }
            if(j!=n-i-1){
                break;
            }
        }
        if(i!=n){
            continue;
        }
        cout << "YES" << endl;
    }

    return 0;
}
