// https://codeforces.com/contest/230/problem/A
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
    int s,n;
    cin >> s >> n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        arr[i] = make_pair(x,y);
    }
    sort(arr, arr+n);
    bool ans = 1;
    for(int i=0;i<n;i++){
        if(s > arr[i].first){
            s+=arr[i].second;
        }else{
            ans = 0;
            break;
        }
    }
    if(ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
