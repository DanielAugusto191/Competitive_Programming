// https://codeforces.com/contest/469/problem/A
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
    set<int> s;
    int p;
    cin >> p;
    for(int i=0;i<p;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size() == n){
        cout << "I become the guy." << endl;
    }else{
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}

