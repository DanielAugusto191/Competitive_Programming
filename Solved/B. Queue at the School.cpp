// https://codeforces.com/contest/266/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;};cout << endl;
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

string timer(string& s){
    queue<char> q;
    string resp = "";
    for(int i=0;i<s.size();i++){
        q.push(s[i]);
    }
    while(q.size() > 0){
        char ss = q.front();
        q.pop();
        if(q.empty()){ resp += ss; break;}
        if(q.front() == 'G' && ss == 'B'){
            resp += "GB";
            q.pop();
            continue;
        }
        resp += ss;
    }
    return resp;
}


int main(void){
    int n,x;cin >> n >> x;
    string s;cin>> s;
    for(int i=0;i<x;i++){
        s = timer(s);
    }
    cout << s << endl;
    return 0;

}
