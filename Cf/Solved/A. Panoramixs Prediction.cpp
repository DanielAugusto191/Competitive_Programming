// https://codeforces.com/contest/80/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 50;
int main(){_
	int n,m;cin>>n>>m;
	vector<bool> p(MAX+1, true);
	for(int i=3;i*i <= MAX;i+=2) if(p[i]) for(int j=i*i; j<=MAX;j+=i) p[j] = false;
	if((m%2==0 && m!=2) || !p[m]) {cout << "NO" << endl; exit(0);}
	for(int i=n+2;i<m;i+=2) if(p[i] == true) {cout << "NO" << endl; exit(0);}
	cout << "YES" << endl;
	exit(0);
}
