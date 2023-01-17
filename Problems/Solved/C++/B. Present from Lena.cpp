// https://codeforces.com/contest/118/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	for(int i=0;i<=n;++i){
		for(int j=0;j<2*n-2*i;++j) cout << ' ';
		for(int j=0;j<=i;++j){
			cout << j;
			if(i!=0) cout << ' ';
		}
		for(int j=i-1;j>=0;--j){
			cout << j;
			if(j != 0) cout << ' ';
		}
		cout << endl;
	}
	for(int i=n-1;i>=0;--i){
		for(int j=0;j<2*(n-i);++j) cout << ' ';
		for(int j=0;j<=i;++j){
			cout << j;
			if(i!=0) cout << ' ';
		}
		for(int j=i-1;j>=0;--j){
			cout << j;
			if(j != 0) cout << ' ';
		}
		cout << endl;
	}
	exit(0);
}
