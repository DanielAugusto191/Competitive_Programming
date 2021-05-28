// https://codeforces.com/contest/490/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;


int main(void){
    int n;cin>> n;
    vector<int> v1,v2,v3;
    map<int,vector<int> > m;
    for(int i=0;i<n;i++){ int x; cin >> x; m[x].push_back(i+1);}
    if(m.size() < 3){
        cout << 0 << endl;
        return 0;
    }
    int mm = INF;
    for(map<int,vector<int> >::iterator it = m.begin();it!=m.end();++it) mm = min((int)it->second.size(), mm);
    
    cout << mm << endl;
    // for(map<int,vector<int> >::iterator it = m.begin();it!=m.end();++it){
    //     cout << it->first << "' --- '"  << endl;
    //     for(auto e: it->second){
    //         cout << e << ' ';
    //     }
    //     cout << endl;
    // }
    for(int i=0;i<mm;i++){
        for(map<int,vector<int> >::iterator it = m.begin();it!=m.end();++it) 
            cout << it->second[i] << ' ';
        cout << endl;
    }
}
