// https://codeforces.com/contest/670/problem/A
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
    
    int n;cin >> n;

    // Menor
    int l = (n/7) * 2;
    if(n%7 == 6){
        l ++; 
    }
    // Maior
    int k = (n/7) * 2;
    if(n%7 >= 2){
        k+=2;
    }else{
        k+=n%7;
    }
    cout << l << ' ' << k << endl;

    return 0;
}
