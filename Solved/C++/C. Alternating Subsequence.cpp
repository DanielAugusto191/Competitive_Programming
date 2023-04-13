// https://codeforces.com/contest/1343/problem/C
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef long long ll;
using namespace std;

int it47(string s){
    bool ans = 1;
    for(int i=0;i<s.size();i++){
        if(s[i] != '4' && s[i] != '7'){
            ans = 0;
            break;
        }
    }
    return ans;
}

int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        int arr[n];
        read(arr, n);
        long long soma = 0;
        int p;
        if(arr[0] > 0){
            p=1;
        }else{
            p=0;
        }
        vector<long long> pl;
        pl.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i] > 0 && p){
                pl.push_back(arr[i]);
            }else if(arr[i] > 0 && !p){
                p = 1;
                soma += *max_element(pl.begin(),pl.end());
                pl.clear();
                pl.push_back(arr[i]);
            }else if(arr[i] < 0 && p){
                p=0;
                soma += *max_element(pl.begin(),pl.end());
                pl.clear();
                pl.push_back(arr[i]);
            }else if(arr[i] < 0 && !p){
                pl.push_back(arr[i]);
            }
        }
        soma += *max_element(pl.begin(),pl.end());
        cout << soma << endl;
    }
    exit(0);
}
