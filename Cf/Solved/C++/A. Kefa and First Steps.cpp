// https://codeforces.com/contest/580/problem/A
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
    int arr[n];
    read(arr,n);
    int m =0;
    int k =1;
    for(int i=1;i<n;i++){
        if(arr[i] >= arr[i-1]){
            k++;
        }else{
            m = max(m,k);
            k=1;

        }
    }
    m = max(m,k);
    cout << m << endl;
    exit(0);
}
