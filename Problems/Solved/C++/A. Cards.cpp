// https://codeforces.com/contest/1220/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
 
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(void){
    _
    int t;cin>>t;
    string x;cin>>x;
    map<char,int> m;
    for(char e: x){
        m[e]++;
    }
    int k = min(m['o'], min(m['n'], m['e']));
    m['o'] = max(m['o']-k,0);
    m['n'] = max(m['n']-k,0);
    m['e'] = max(m['e']-k,0);

    int z = min(m['z'], min(m['e'], min(m['r'], m['o'])));

    for(int i=0;i<k;i++)
        cout << 1 << ' ';
    for(int i=0;i<z;i++)
        cout << 0 << ' ';
    cout << endl;



    exit(0);
}

