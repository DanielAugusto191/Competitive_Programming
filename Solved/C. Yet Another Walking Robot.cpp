// https://codeforces.com/contest/1296/problem/C
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
typedef long long ll;
using namespace std;
 
 
 
int main(void){
    int t;
    cin >> t;
    while(t--){
        map<pair<int, int>, int> m;
        int n;
        cin >> n;
        string s;
        cin >> s;
        int x=0, y=0;
        int rx=0, ry=0;
        m[make_pair(x,y)] = 0;
        int i=0;
        int r = n;
        bool ans = 1;
        for(i=0;i<n;i++){
            if(s[i] == 'U'){
                y++;
            }else if(s[i] == 'D'){
                y--;
            }else if(s[i] == 'L'){
                x--;
            }else if(s[i] == 'R'){
                x++;
            }
            pair<int, int> atual = make_pair(x, y);
            int j = 0;
            if(m.find(atual) != m.end()){
                if(i-m[atual]+1 <= r){
                    rx = m[atual]+1;
                    ry = i+1;
                    r = i-m[atual]+1;
                    ans = 0;
                }
            }
            m[make_pair(x,y)] = i+1;
        }

        if(ans){
            cout << "-1" << endl;
        }else{
            cout << rx << ' ' << ry << endl;
        }
 
    }
    return 0;
}
