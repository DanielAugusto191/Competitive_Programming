//https://codeforces.com/contest/1559/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define all(a) a.begin(),a.end()
#define read(arr, n) for(int i=0;i<n;++i) cin >> arr[i];

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		string s; cin >> s;
		int ans = -1;
		for(int i=0;i<n;++i){
			if(s[i] != '?'){
				ans = i;
				int j = i-1;
				while(j >= 0 && s[j] == '?'){
					if(s[j+1] == 'R') s[j] = 'B'; else s[j] = 'R';
					--j;
				}
			}
		}
		if(ans == -1) {
			map<int, char> m;
			m[0] = 'B';
			m[1] = 'R';
			for(int i=0;i<n;++i) s[i] = m[i%2];
		}else{
			ans++;
			while(ans < n){
				if(s[ans-1] == 'R') s[ans] = 'B'; else s[ans] = 'R';
				ans++;
			}
		}
		cout << s << endl;

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

