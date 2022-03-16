// https://codeforces.com/contest/1385/problem/C
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
        vector<int> p(n);
        read(p,n);
        int i = n-1;
        while(i > 0 && p[i-1] >= p[i]) --i;
        while(i > 0 && p[i-1] <= p[i]) --i;
        cout << i << endl;

    }
    


    return 0;
}
