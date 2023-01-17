// https://codeforces.com/contest/1385/problem/D
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

string s;

int agood(char c, int ini, int n){
    if(n-ini == 1){
        if(s[ini] == c){
            return 0;
        }
        return 1;
    }
    int m = (ini+n)/2;
    pair<int,int> cc = {0,0};
    for(int i=ini;i<m;i++){
        if(s[i] != c){
            cc.first++;
        }
    }
    for(int i=m;i<n;i++){
        if(s[i] != c){
             cc.second++;
        }
    }
    return min(cc.first + agood(c+1, m, n),cc.second + agood(c+1, ini, m));
}
 
int main(void){
    int t;cin>> t;
    while(t--){
        int n;cin>>n;
        cin >> s;
        cout << agood('a', 0, n) << endl;
    }
    return 0;
}
