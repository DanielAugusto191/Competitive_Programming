// https://codeforces.com/contest/1324/problem/B
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
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int cs=0;
        for(int i=0;i<n;i++){
            for(int j=i+2;j<n;j++){
                if(arr[i] == arr[j]){
                    cs=1;
                    break;
                }
            }
            if(cs){
                break;
            }
        }
        if(cs){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

        
    }

    return 0;

}
