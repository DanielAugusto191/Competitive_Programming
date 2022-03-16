// https://codeforces.com/contest/1367/problem/B
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
    int t;cin>> t;
    while(t--){
        int n;cin>>n;
        pair<int,int> erp = {0,0}; // erp.first - impares em indice par, erp.second - pares em indice impar
        for(int i=0;i<n;i++){ 
            int x;cin>>x;
            if(i%2!=x%2) if(!(i%2)) erp.first++; else erp.second++;
        }
        if(erp.first == erp.second){
            cout << erp.first << endl;
        }else{
            cout << "-1" << endl;
        }

    }
    return 0;
}
