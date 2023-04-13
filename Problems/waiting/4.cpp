// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2315
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
const int MOD = (int)1e9 + 7;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		unordered_map<char, int> m;
		for(int i=0;i<n;++i){
			char a;
			int b;
			cin >> a >> b;
			m[a] = b;
		}
		cin >> n;
		int ans = 0;
		for(int i=0;i<n;++i){
			string s;
			getline(cin >> ws, s);
			for(char &e: s) ans += m[e];
		}
		cout << ans/100 << '.' << (ans/10)%10 << ans%10 << '$' << endl;
//		if(ans < 10) cout << "0.0" << ans << "$\n";
//		else if (ans < 100) cout << "0." << ans << "$\n";
//		else{
//			string nans = to_string(ans);
//			int k = nans.size();                                                  		
//			int i = 0;                                                            	
//			for(;i<k-2;++i) cout << nans[i];                                      	
//			cout << "." << nans[nans.size()-2] << nans[nans.size()-1] << '$' << endl;
//		}
	}
	exit(0);
}
/*

*/
