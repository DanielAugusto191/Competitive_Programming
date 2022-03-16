// https://codeforces.com/contest/1367/problem/C
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
        int n,k;cin>>n>>k;
        string s;cin>>s;
        vector<int> i1;
        for(int i=0;i<n;i++) if(s[i] == '1') i1.push_back(i);
        int ans = 0;
        if(i1.empty()){
            i1.push_back(0);
            ans = 1;
        }
        ans += i1[0]/(k+1);
        for(int i=1;i<i1.size();i++){
            int nz = (i1[i]-i1[i-1]-1);
            nz = max(0, nz-2*k);
            ans += ceil(nz*1.0/(k+1));
        }
        ans += (n-1-i1[i1.size()-1]) / (k+1);
        cout << ans << endl;
    }
    return 0;
}
