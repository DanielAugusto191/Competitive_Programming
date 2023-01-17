// https://codeforces.com/contest/707/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){
    int n,m;cin>>n>>m;
    bool cl = true;
    for(int i=0; i<n && cl; i++)
        for(int j=0;j<m && cl;j++){
            char c;cin>>c;
            if(c == 'C' || c == 'M' || c == 'Y') cl=false;
        }
    if(!cl) cout << "#Color" << endl; else cout << "#Black&White" << endl;
    return (0);
}

