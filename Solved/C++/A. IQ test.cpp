// https://codeforces.com/contest/25/problem/A
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
    int n;
    cin >> n;
    pair<int,int> p = make_pair(0,0),e = make_pair(0,0);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==0){
            p.first = i+1;
            p.second++;
        }else{
            e.first = i+1;
            e.second++;
        }
        if(p.second > 1 && e.second == 1){
            cout << e.first << endl;
            break;
        }else if(e.second > 1 && p.second == 1){
            cout << p.first << endl;
            break;
        }
    }
    return 0;
}
