// https://codeforces.com/contest/160/problem/A
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef long long ll;
using namespace std;

int it47(string s){
    bool ans = 1;
    for(int i=0;i<s.size();i++){
        if(s[i] != '4' && s[i] != '7'){
            ans = 0;
            break;
        }
    }
    return ans;
}

int main(void){
    int n;
    cin >> n;
    int arr[n];
    int s = 0, v = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        s+=arr[i];
    }
    sort(arr, arr+n, greater<int>());
    int k =0;
    int i;
    for(i=0;i<n;i++){
        k += arr[i];
        s -= arr[i];
        if(k > s){
            break;
        }
    }
    cout << i+1 << endl;


    //v = ((s+(s%2))/2)+!(s%2);

    exit(0);
}
