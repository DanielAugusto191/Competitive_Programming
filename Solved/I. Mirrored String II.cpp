// https://codeforces.com/gym/101350/problem/I
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
string s;
char arr[11] = {'A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y'};
int f(int m){
	if(!m) return 0;
	for(int i=0;i<(int)s.size()-m+1;++i){
		int l=i,r=i+m-1;
		int ans = 1;
		while(r >= l){
			int ex =0;
			for(auto& e: arr) if(s[l] == e) ex =1;
			if(!ex){ans =0; break;}
			ex = 0;
			for(auto& e: arr)if(s[r] == e) ex =1;
			if(!ex){ans =0; break;}

			if(s[l] != s[r]){ans = 0;break;}
			r--;l++;
		}
		if(ans) return 1;
	}
	return 0;
}


int main(){
	int t;cin>>t;
	while(t--){
		cin>>s;
		int ans = 0;
		if(f(2)){
			int l =2, r=(int)s.size();
			// pares
			while(l+2 < r){
				int m = (l+r)/2;
				m += m%2;
				if(f(m)) l = m; else r = m;
				// cout << l << r << endl;
			}
			ans = f(r)? r:l;
		}
		if(f(1)){
			int l =1, r=(int)s.size();
			// impares
			while(l+2 < r){
				int m = (l+r)/2;
				m += !(m%2);
				if(f(m)) l = m; else r = m;
			}
			int ans2 = f(r)? r: l;
			ans = max(ans, ans2);
		}	
		cout << ans << endl;

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
 
