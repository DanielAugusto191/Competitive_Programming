// https://codeforces.com/contest/489/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int bs(vector<int>& arr, int x, int l, int r, int n){
    if((l > r) || (n==0))  return 0;
    int m = (l+r)/2;
    if(arr[m] == x){
        arr.erase(arr.begin()+m);
        return 1;
    }
    if(arr[m] > x){
        return bs(arr, x, l, m-1, n);
    }else{
        return bs(arr, x, m+1, r, n);
    }

}

int main(void){
    int n;cin>> n;
    vector<int> boy(n); read(boy, n);
    int m;cin>> m;
    vector<int> girl(m); read(girl, m);
    sort(all(boy));sort(all(girl));
    int ans  = 0;
    for(int i=0;i<n;i++){
        if(!bs(girl, boy[i]-1, 0, girl.size()-1, girl.size())){
            if(!bs(girl, boy[i], 0, girl.size()-1 , girl.size())){
                if(!bs(girl, boy[i]+1, 0, girl.size()-1 , girl.size())){
                    continue;
                }
            }
        }
        ans++;
    }
    cout << ans <<endl;

}
