// https://codeforces.com/contest/1374/problem/D
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

bool f(ii& a, ii& b){
    return a.second < b.second;
}

int main(void){
    int t;cin>>t;
    while(t--){
        ll n,k, x = 0, y = 0, y0 = 0, s =0;cin >> n >> k;
        map<ll,ll> m;
        for(int i=0;i<n;i++){
            ll p;cin>>p;
            if(p%k){
                s++;
            }else{
                continue;
            }
            ll ele = k - p%k;
            if(m.find(ele) != m.end()){
                m[ele]++;
            }else{
                m.insert(make_pair(ele, 1));
            }
            if(m[ele] > y){
                y = m[ele];
            }
        }
        for(map<ll,ll>::iterator it=m.begin();it!=m.end();++it){
            if(it->second == y){
                y0 = max(y0, it->first);
            }
        }
        if(m.empty()){
            cout << 0 << endl;
            continue;
        }
        ll resp = k*(y-1)+y0+1;
        cout << resp << endl;
        
    }
    return 0;

}
