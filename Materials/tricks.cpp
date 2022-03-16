// 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
    // if N is a power of 2;
    // for(int n=0;n<50;++n) 
    //     cout << n << " - " << (!(n & (n-1))? "YES":"NO") << endl;
    // Explicação:
    // 10000..0 = power of 2
    // &
    // 01111..1 = (power of 2) - 1
    // =
    // 00000..0 = (power of 2) & ((power of 2) - 1) = 0 
    // ! 
    //== 1 = !0 = 1

    // max power of 2 dividing n
    // int n = 24;
    // cout << (n & -n) << endl; // 8


	exit(0);
}


