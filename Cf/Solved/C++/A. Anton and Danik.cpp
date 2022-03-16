// https://codeforces.com/contest/734/problem/A
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
    string s; cin >> s;
    int a=0,d=0;
    for(int i=0;i<n;i++){
        if(s[i] == 'A'){
            a++;
        }else{
            d++;
        }
    }
    if(a>d){
        cout << "Anton" << endl;
    }else if(d>a){
        cout << "Danik" << endl;
    }else{
        cout << "Friendship" << endl;
    }
}
