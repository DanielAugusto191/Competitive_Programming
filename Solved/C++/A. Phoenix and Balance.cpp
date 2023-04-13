// https://codeforces.com/contest/1348/problem/A
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
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int k = n;
        vector<int> pa, pb;
        int sa = 1 << k, sb = 0;
        pa.push_back(1<<k);
        k--;
        while(k){
            if(pa.size() == n/2){
                pb.push_back(1<<k);
                sb += 1<<k;
                k--;
                continue;
            }
            if(pb.size() == n/2){
                pa.push_back(1<<k);
                sa += 1<<k;
                k--;
                continue;
            }
            if(sa > sb){
                pb.push_back(1<<k);
                sb += 1<<k;
            }else{
                pa.push_back(1<<k);
                sa += 1<<k;
            }
            k--;
        }
        cout << abs(sa-sb) << endl;
    }

    return 0;
}
