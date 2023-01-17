// https://codeforces.com/contest/1385/problem/B
#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
typedef unsigned long long ll;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
using namespace std;


int main(void){
    int t;cin>> t;
    while(t--){
        int n;cin>>n;
        vector<int> p;
        for(int i=0;i < 2*n ;i++){
            int x,ans=0;
            cin >> x;
            for(int e: p){
                if(e == x){
                    ans = 1;
                    break;
                }
            }
            if(!ans) p.push_back(x);
        }
        for(int e: p){
            cout << e << ' ';
        }
        cout << endl;
    }
    


    return 0;
}
