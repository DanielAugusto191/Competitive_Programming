// https://codeforces.com/contest/500/problem/A
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
    int n,t;
    cin >> n >> t;
    vector<pair<int, int> > arr;
    for(int i=0;i<n-1;i++){
        int x;
        cin >> x;
        arr.push_back(make_pair(i, i+x));
    }
    int ans = 0;
    pair<int,int> atual = arr[0];
    if(atual.second+1 == t){
            ans = 1;
            atual.second = n;
    }

    for(;atual.second+1 < n;){
        atual = arr[atual.second];
        if(atual.second+1 == t){
            ans = 1;
            break;
        }

    }
    if(ans) cout << "YES" << endl; else cout << "NO" << endl;

    return 0;
}
// 0 2
// 1 4
// 2 4
// 3 6
// 4 6
// 5 7
// 6 8
