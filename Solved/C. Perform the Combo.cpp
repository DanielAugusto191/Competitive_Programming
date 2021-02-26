// https://codeforces.com/contest/1311/problem/C
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << endl;
using namespace std;

int main(void){
    map<char, int> l = {{'a', 0}, {'b', 0}, {'c', 0}, {'d', 0}, {'e', 0}, {'f', 0}, {'g', 0}, {'h', 0}, {'i', 0}, {'j', 0}, {'k', 0}, {'l', 0}, {'m', 0}, {'n', 0}, {'o', 0}, {'p', 0}, {'q', 0}, {'r', 0}, {'s', 0}, {'t', 0}, {'u', 0}, {'v', 0}, {'w', 0}, {'x', 0}, {'y', 0}, {'z', 0}};

    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        string s;
        cin >> s;
        int p[m];
        for(int i=0;i<m;i++){
            cin >> p[i];
        }
        sort(p, p+m);
        for(int i=0;i<n;i++){
            l[s[i]] += m - (upper_bound(p, p+m, i)-p) + 1;
        }
        map<char, int>::iterator it = l.begin();
        for(;it!=l.end();it++){
            cout << it->second << ' ';
            it->second = 0;
        }
        cout << endl;
    }

    return 0;
}
