// https://codeforces.com/contest/1775/problem/A2
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
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int n = s.size();
		if(s[0] == s[n-1]){
			cout << s[0] << ' ';
			for(int i=1;i<n-1;++i) cout << s[i];
			cout << ' ' << s[n-1] << endl;
		}else{
			if(s[0] == 'a'){
				int k = 1;
				while(k < n-1 && s[k] != 'b')++k;
				if(k == n-1){
					for(int i=0;i<n-2;++i) cout << s[i];
					cout << " a b" << endl;
				}else{
					for(int i=0;i<k;++i) cout << s[i];
					cout << ' ';
					for(int i=k;i<n-1;++i) cout << s[i];
					cout << ' ' << s[n-1] << endl;
				}
			}
			else {
				int k  =1;
				while(k < n-1 && s[k] != 'a')++k;
				if(k == n-1){
					cout << "b ";
					for(int i=1;i<n-1;++i) cout << s[i];
					cout << " a" << endl;
				}else{
					for(int i=0;i<k;++i) cout << s[i];
					cout << " a ";
					for(int i=k+1;i<n;++i) cout << s[i];
					cout << endl;
				}
				
			}
		}
/*
baaaaaaa a a
ba < bbbbbbbb > a

a < aaaaaaaa > b
bb aaaaaaa a
b a aaaaaaaaa
b bbbbbb a

 * */

	}
	exit(0);
}

