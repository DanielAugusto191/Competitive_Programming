// https://codeforces.com/contest/1562/problem/A 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 2e5 + 10;

int a[MAX], b[MAX];

int main(){_
	int t;cin>>t;
	while(t--){
		int l,r;cin>>l>>r;
		cout << ((r/2+1 >= l)? r%(r/2+1):r%l) << endl;
	}
	exit(0);
}