// https://codeforces.com/contest/703/problem/A
#include <bits/stdc++.h>
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
using namespace std;

int main(void){
    int n;cin>>n;
    int p=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x>y){
            p++;
        }else if(y > x){
            p--;
        }
    }
    if(p > 0){
        cout << "Mishka" << endl;
    }else if(p<0){
        cout << "Chris" << endl;
    }else{
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
