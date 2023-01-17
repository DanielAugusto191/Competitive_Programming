// https://cses.fi/problemset/task/1070/
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

int main(){_
	int n;cin>>n;
	if(n == 2 || n == 3) cout << "NO SOLUTION" << endl, exit(0);
	int k = n - !(n%2);
	while(k >= 1) cout << k << ' ', k -= 2;
	k = n - (n%2);
	while(k > 0) cout << k << ' ', k -= 2;
	cout << endl;

	exit(0); 
}
