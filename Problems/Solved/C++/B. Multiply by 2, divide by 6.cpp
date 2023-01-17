// https://codeforces.com/contest/1374/problem/B
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
        int x; cin >> x;
        if(x==1){
            cout << '0' << endl;
            continue;
        }
        int ans = 0;
        while(x != 1){
            if(x%6==0){
                x /= 6;
                ++ans;
            }else{
                if(x%3==0){
                    x *= 2;
                    ++ans;
                }else{
                    ans = -1;
                    break;
                }
            }   
        }
        cout << ans << endl;
    }

    return 0;
}
