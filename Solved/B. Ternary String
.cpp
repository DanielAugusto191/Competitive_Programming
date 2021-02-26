// https://codeforces.com/contest/1354/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	while(n--){
		int ans = INF;
		string s;cin >> s;
		map<char, int> m;
		int l=0,r=0;
		int c=0;
		while(r<(int)s.size()){
			m[s[r]]++;
			while(m['1'] && m['2'] && m['3']){
				c=1;
				ans = min(ans, r-l+1);
				m[s[l]]--;
				l++;
			}
			r++;
		}
		if(c)
		cout << ans << endl; else cout << 0 << endl;
	}
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

