// https://codeforces.com/contest/1203/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;};

typedef long long ll;
typedef pair<int,int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

map<int,int> sti;

int main(){_
	int t;cin >> t;
	while(t--){
		sti.clear();
		int n;cin>>n;
		n *= 4;
		for(int i=0;i<n;++i){
			int a;cin>>a;
			++sti[a];
		}
		int ans = 0;
		map<int,int>::iterator l = sti.begin(), r = sti.end();
		r--;
		int x = (int)sti.size()/2;
		int ch = (*l).first*(*r).first;
		for(int i=0;i<=x;++i){
			if((*l).second != (*r).second || (*l).second % 2 == 1 || (*r).second % 2 == 1 || (*l).first*(*r).first != ch) {ans = 1; break;}
			l++;
			r--;
		}
		cout << (ans ? "NO":"YES") << endl;
	}
	exit(0);
}
