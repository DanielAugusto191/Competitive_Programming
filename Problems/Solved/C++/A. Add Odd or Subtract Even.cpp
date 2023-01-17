// https://codeforces.com/contest/1311/submission/71778976
#include <bits/stdc++.h>
#define endl '\n'
#define dbg(a) cout << a << endl;
using namespace std;

int main(void){
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int s = 0;
        while(a!=b){
            int h = a-b;
            if(h > 0){
                if(h%2==0){
                    a-=h;
                    s++;
                }else{
                    a-=h+1;
                    s++;
                }
            }else{
                h = h*-1;
                if(h%2==1){
                    a += h;
                    s++;
                }else{
                    a += (h-1);
                    s++;
                }
            }
        }
        cout << s << endl;
        
    }

    return 0;
}
