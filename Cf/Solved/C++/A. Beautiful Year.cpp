// https://codeforces.com/contest/271/problem/A
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef long long ll;
using namespace std;

bool fc(pair<int, int> a, pair<int,int> b){
    return a.second > b.second;
}

int oD(int n){
    string s = to_string(n);

    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(s[i] == s[j]){
                return 0;
            }
        }
    }
    return 1;
}

int main(void){
    int n;
    cin >> n;
    n++;
    while(!oD(n)){
        n++;
    }
    cout << n << endl;
    exit(0);
}
