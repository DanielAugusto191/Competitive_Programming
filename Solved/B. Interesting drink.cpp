// https://codeforces.com/contest/706/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){
    int n;cin>>n;
    vector<int> arr(n); read(arr, n);
    sort(arr.begin(), arr.end());
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int x;cin>>x;
        cout << (int)(upper_bound(arr.begin(), arr.end(), x) - arr.begin()) << endl;
    }


    return (0);
}

