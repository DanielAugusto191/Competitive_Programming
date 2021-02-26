// https://codeforces.com/contest/1343/problem/B
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
        int x;
        cin >> x;
        int arr[x];
        if((x/2)%2 == 0){
            cout << "YES" << endl;
            int s =0, k=0;
            for(int i=0;i<x/2;i++){
                cout << 2*(i+1) << ' ';
                s+=2*(i+1);
            }
            int l = 1;
            for(int i=0;i<(x/2)-1;i++){
                cout << l << ' ';
                k+=l;
                l+=2;
            }
            k+=l;
            cout << l+(s-k) << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    exit(0);
}
