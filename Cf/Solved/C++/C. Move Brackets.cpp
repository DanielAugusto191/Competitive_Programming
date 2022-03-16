// https://codeforces.com/contest/1374/problem/C
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
    // TLE, of course :(
    int t;cin>>t;
    while(t--){
        int n,l=0, k=0; cin >> n;
        string s;cin >> s;
        for(int i=0;i<n;i++){
            if(s[i] == '(') l++; else l--;
            if(l == -1){
                k++;
                l = 0;
            }
        }
        cout << k << endl;
    }
    return 0;

}

