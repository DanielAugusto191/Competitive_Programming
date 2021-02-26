// https://codeforces.com/contest/510/problem/A
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
using namespace std;

int main(void){
    int n,m;
    cin >> n >> m;
    bool ans = 1; // 1 left, 0 right
    for(int i=0;i<n;++i){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout << "#";
            }
        }else{
            if(ans){
                for(int j=0;j<m-1;j++){
                    cout << '.';  
                } 
                cout << '#';
            }else{
                cout << '#';
                for(int j=0;j<m-1;j++){
                    cout << '.';  
                } 
            }
            ans = !ans;
        }
        cout << endl;
    }
}
