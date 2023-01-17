// https://codeforces.com/gym/307122/problem/B
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

int s,k;

int main(){_
	cin>>s>>k;
	int x = (s+1)/4;
	for(int i=0;i<x;++i) cout << '4';
	cout << '5' << endl;
	for(int i=0;i<x+1;++i) cout << '5';
	cout << endl;
	exit(0);
}
/*
S(16) = 7
S(15) = 6
S(16+15 = 31) = 4
7 2
7 99999993
1000 3

7 1
7 93
100

6 1
6 4
100
*/
