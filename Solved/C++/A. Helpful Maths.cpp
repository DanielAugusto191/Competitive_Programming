// https://codeforces.com/contest/339/problem/A
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
    string s;
    cin >> s;
    int l = (s.size()+1)/2;
    int arr[l];
    for(int i=0, k =0;k<l;i+=2, k++){
        arr[k] = s[i];
        arr[k]-=48;
    }
    sort(arr, arr+l);
    for(int i=0, k=0;i<s.size();i++){
        if(i%2==0){
            cout << arr[k];
            k++;
        }else{
            cout << s[i];
        }
    }
    cout << endl;

    exit(0);
}
