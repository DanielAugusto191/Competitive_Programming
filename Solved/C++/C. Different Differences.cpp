// 
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
		int k,n;cin>>k>>n;
		vector<int> ans;
		int i = 1, p = 1;
		while(p <= n && ans.size() < k){
			ans.push_back(p);
			p += i++;
		}
		p = ans[ans.size()-1]+1;
		int l = ans.size()-1;
		while(ans.size() < k && p <= n) ans.push_back(p++);
		if(ans.size() == k){
			for(auto &e: ans) cout << e << ' ';
			cout << endl;
		}else{
			vector<int> nans(41, 0);
			for(auto e: ans) nans[e] = 1;
			int ns1 = ans.size();
			int ko = ans[ans.size()-1]; // ultimo cara setado 1 
			for(int i=ko;i>0 && ns1 < k;--i) if(!nans[i]) nans[i]=1, ++ns1;
			ns1 = nans.size();
			for(int i=0;i<ns1;++i) if(nans[i]) cout << i << ' ';
			cout << endl;
		}
	}
	exit(0);
}
/*
1 2 3 4 5 6
1 2 4 7 11 12 13

*/
