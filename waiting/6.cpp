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
const int MOD = (int)1e9 + 7;
const int MAX = 1e9;

int main(){_
	int t;cin>>t;
	while(t--){
		int n,d;cin >> n >> d;
		string s; cin >> s;
		int k = s.size();
		int i = 0, c = 0;
		for(;i<k;++i){
			if(s[i]-'0' >= d) cout << s[i];
			else{
				cout << d << s[i];
				i++;
				c = 1;
				while(i < k){
					cout << s[i];
					++i;
				}
				break;
			}
		}
		if(!c) cout << d;
		cout << endl;

	}
	exit(0);
}
/*

*/
