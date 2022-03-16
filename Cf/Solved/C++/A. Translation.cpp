// https://codeforces.com/contest/41/problem/A
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

int main(void){
    string s,k;
    cin >> s >> k;
    string l = s;

    for(int i=0;i<s.size()/2;i++){
        swap(l[i], l[s.size()-1-i]);
    }
    if(l==k){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    exit(0);
}
