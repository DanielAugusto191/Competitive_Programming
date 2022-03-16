// https://codeforces.com/contest/268/problem/A
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
    pair<int,int> arr[n];
    for(int i=0;i<n;i++){
        int x,y;
        cin >> x >> y;
        arr[i] = make_pair(x,y);
    }
    int k = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i].first == arr[j].second){
                k++;
            }
            if(arr[i].second == arr[j].first){
                k++;
            }
        }
    }
    cout << k << endl;
    return 0;
}

