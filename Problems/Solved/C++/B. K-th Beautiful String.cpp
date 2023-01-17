// https://codeforces.com/contest/1328/problem/B
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
    cin >>t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int som = 0;
        int i;
        for(i=1;som < k;i++){
            som += i;
        }
        string s;
        for(int j=0;j<n;j++){
            s+='a';
            if(j == n-i){
                s[j]='b';
            }
            if(j == n-(k-(som-(i-2))+1)){
                s[j] = 'b';
            }
        }
        cout << s << endl;

    }

}
