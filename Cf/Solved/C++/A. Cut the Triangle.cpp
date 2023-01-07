// https://codeforces.com/contest/1767/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}
#define f first
#define s second

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
    int t;cin>>t;
    while(t--){
        string tt;getline(cin, tt);
        unordered_set<int> x,y;
        for(int i=0;i<3;++i){
            int a,b;cin>>a>>b;
            x.insert(a);y.insert(b);
        }
        cout << ((x.size() == 3 || y.size() ==3)?"YES":"NO") << endl;
    }
	exit(0);
}
