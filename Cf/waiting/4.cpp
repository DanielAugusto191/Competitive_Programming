// 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
string s;
int n;
int ab(){
	int ans = 0;
	for(int i=0;i<n-1;++i) if(s[i] == 'a' && s[i+1] == 'b') ++ans, ++i;
	return ans;
}
int ba(){
	int ans = 0;
	for(int i=0;i<n-1;++i) if(s[i] == 'b' && s[i+1] == 'a') ++ans, ++i;
	return ans;
}


int main(){_
	int t;cin>>t;
	while(t--){
		cin >> s;
		n = s.size();
		int nab = ab(), nba = ba();
		if(nab == nba) cout << s << endl;
		else{
			if(nab > nba){
				for(int i=0;i<n-1 && nab > nba;++i) if(s[i] == 'a' && s[i+1] == 'b') {
					s[i] = 'b';
					--nab;
				}
			}else{
				while(nba < nab){
					for(int i=n-1;i>0;--i) if(s[i] == 'a' && s[i-1] == 'b') {
						s[i-1] = 'a';
						nab = ab();
						nba = ba();
						if(nab == nba) break;
					}
				}
			}
			cout << s << endl;
		}
	}
	exit(0);
}