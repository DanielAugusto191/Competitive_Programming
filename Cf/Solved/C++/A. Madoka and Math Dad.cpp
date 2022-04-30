// https://codeforces.com/contest/1647/problem/A
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
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		if(n%3 == 1){
			for(int i=0;i<n/3;++i) cout << "12";		
			cout << '1' << endl;
		}else{
			for(int i=0;i<n/3;++i) cout << "21";
			if(n%3!=0) cout << '2';
			cout << endl;
		}

	}
	exit(0);
	// 1212
	// 2121
	// 12121
	// 21212
}
