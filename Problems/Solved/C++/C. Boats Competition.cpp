// https://codeforces.com/contest/1399/problem/C
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;};cout << endl;
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(void){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        map<int,int> m;
        for(int i=0;i<n;++i){
            int x;cin>>x;
            m[x]++;
        }
        int k = 0;
        for(int i=2;i< 2*n + 1;++i){
            int l = 0;
            for(int j=1;j < (i+1)/2;++j){
                if(i-j > n) continue;
                l += min(m[j], m[i-j]);
            }
            if(!(i%2)) l += m[i/2]/2;
            k = max(k, l);
        }
        cout << k << endl;
    }


    return 0;
 
}
