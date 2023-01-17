// https://codeforces.com/contest/1490/problem/D
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

vector<int> v(100), ans(100);

void f(int l, int r, int d){
    int mm = -INF, k = -1;
    for(int i=l;i<r;++i){
        if(v[i] > mm){
            mm = v[i];
            k = i;
        }
    }
    if(k == -1) return;
    ans[k] = d;
    f(l, k, d+1);
    f(k+1, r, d+1);
}

int main(){_
	int t;cin>>t;
    while(t--){
        int n;cin>>n;
        for(int i=0;i<n;++i) cin >> v[i];
        f(0, n, 0);
        for(int i=0;i<n;++i) cout << ans[i] << ' ';
        cout << endl;
    }
}