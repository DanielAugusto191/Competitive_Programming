// https://codeforces.com/contest/1097/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){
    string s; cin >> s;
    for(int i=0;i<5;i++){
        string x;cin >> x;
        if(x[0] == s[0] || x[1] == s[1]){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

}

// 16
// 2 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
// 2

// 16
// 2 1 1 1 1 2 2 1 1 1 2 2 2 1 1 1
