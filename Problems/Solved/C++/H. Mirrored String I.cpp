// https://codeforces.com/gym/101350/problem/H
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
	int n;cin>>n;
	char arr[11] = {'A','H','I','M','O','T','U','V','W','X','Y'};
	while(n--){
		string s;cin>>s;
		int l = 0, r=s.size()-1;
		int ans = 1;
		while(l <= r){
			int x = 0;
			for(auto& e: arr) if(s[l] == e){x=1;break;}
			if(!x){ans = 0; break;}
			x = 0;
			for(auto& e: arr) if(s[r] == e){x=1;break;}
			if(!x){ans = 0; break;}
			if(s[l] != s[r]){
				ans =0;
				break;
			}
			l++;r--;
		}
		if(ans) cout << "yes" << endl; else cout << "no" << endl;
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


