// https://codeforces.com/contest/4/problem/C
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
    map<string, int> m;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        map<string, int>::iterator it = m.find(s);
        if(it != m.end()){
            string k = it->first + to_string(it->second);
            ++it->second;
            cout << k << endl;
            m.insert(make_pair(k, 1));
        }else{
            m.insert(make_pair(s, 1));
            cout << "OK" << endl;
        }
    }
}

