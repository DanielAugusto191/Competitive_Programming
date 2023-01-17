// https://codeforces.com/contest/231/problem/A
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
    int s = 0;
    cin >> n;
    while(n--){
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b+c >= 2){
            s++;
        }
    }
    cout << s << endl;
    exit(0);
}
