// https://codeforces.com/contest/136/problem/A
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
    int n;
    cin >> n;
    int arr[n], arr2[n];
    read(arr, n);
    for(int i=0;i<n;i++){
        arr2[arr[i]-1] = i+1;
    }
    for(int i=0;i<n;i++){
        cout << arr2[i] << ' ';
    }
    cout << endl;
    exit(0);
}
