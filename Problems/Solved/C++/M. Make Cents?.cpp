// https://codeforces.com/gym/101350/problem/M
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){_
	int t;cin>>t;
	while(t--){
		unordered_map<string, float> m;
		int c,n;cin>>c>>n;
		while(c--){
			string s;cin>>s;
			float x;cin>>x;
			m[s] = x;
		}
		float ans = 0;
		while(n--){
			float x;cin>>x;
			string s;cin>>s;
			ans += (s != "JD") ? x*1.0*m[s] : x;
		}
		cout << fixed << setprecision(6) << ans << endl;
	}
	return (0);
}

