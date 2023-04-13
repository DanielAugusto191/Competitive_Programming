// https://codeforces.com/contest/489/problem/C
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
    int m,s;cin>>m>>s;
    if(s > m*9 || (s==0 && m>1)){
        cout << "-1 -1" << endl;
        return 0;
    }

    // maior
    int nn = s/9;
    string k = "";
    for(int i=0;i<nn;i++){
        k+='9';
    }
    if(k.size() < m){
        k += to_string(s%9);
        for(int i=0;i < m-(nn+1);i++){
            k+='0';
        }
    }
    // menor
    int arr[m] = {0};
    arr[0] = 1;
    if(m == 1){
        arr[0] = s;
    }else{
        int mn = (s-1)/9;
        for(int i=0;i<mn;i++){
            arr[m-1-i] = 9;
        }
        if(mn*9+1 < s){
            arr[m-1-mn] = arr[m-1-mn] + (s - (mn*9+1)); 
        }
    }
    for(int i=0;i<m;++i){
        cout << arr[i];
    }
    cout << ' ' << k << endl;


    return 0;
}
