// https://codeforces.com/contest/1433/problem/B
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

int main(void){_
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];read(arr,n);
        int ans = 0;
        int j,s=0;
        for(int i=0;i<n;i++){
            if(arr[i] && ans){
                s+= i-j-1;
                j = i;
            }
            if(arr[i]){
                ans = true;
                j = i;
            }
        }
        cout << s << endl;
    }

    return (0);
}

