// https://codeforces.com/contest/149/problem/A
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
 
int main(void){_
    int k;cin>>k;
    vector<int> v(12); read(v, 12);
    int x = 0;
    int ans = 0;
    while(v.size() > 0 && x  < k){
        auto it = max_element(v.begin(),v.end());
        x += *it;
        ans++;
        v.erase(it);
    }
    if(x < k){
        cout << -1 << endl;
    }else{
        cout << ans << endl;
    }
    return 0;
}

