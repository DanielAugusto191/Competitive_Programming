// https://codeforces.com/contest/1398/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];

typedef unsigned long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int m1(string& arr){
    int t = 0, m = 0, i =0, n = arr.size();
    ii p = {0, 0};
    for( ;i<n;i++){
        if(arr[i] == '1'){
            t++;
        }else{
            if(t > m){
                p = {i-t,i};
                m = t;
            }
            t = 0;
        }
    }
    if(t > m){
        p = {i-t,i};
        m = t;
    }
    arr.erase(arr.begin()+p.first, arr.begin()+p.second);
    return m;
}

int main(void){
    int t;cin >> t;
    while(t--){
        string arr; cin >> arr;
        int i = 0, m = 0;
        while(1){
            int k = m1(arr);
            if(!k)break;
            if(i%2==0){
                m += k;
            }
            i++;
        }
        cout << m << endl;
    }
    return 0;
}
