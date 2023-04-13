// https://codeforces.com/contest/1772/problem/B
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

int M[2][2];

void r(){
    int aux = M[0][0];
    M[0][0] = M[1][0];
    M[1][0] = M[1][1];
    M[1][1] = M[0][1];
    M[0][1] = aux;
}
bool c(){
    return (M[0][0]<M[0][1]) && (M[0][0] < M[1][0]) && (M[0][1] < M[1][1]) && (M[1][0] < M[1][1]);
}

bool teste(){
    cin >> M[0][0] >> M[0][1] >> M[1][0] >> M[1][1];
    for(int i=0;i<4;++i){
        if(c()) return 1;
        r();
    }
    return 0;
}

int main(){_
    int t;cin>>t;
    while(t--){
        cout << (teste()? "YES":"NO") << endl;
    }
	exit(0);
}
