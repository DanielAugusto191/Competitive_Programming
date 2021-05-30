// https://codeforces.com/contest/977/problem/F 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	vector<int> v(n);
	int m = 0;
	for(auto &e: v){
		cin >> e;
		m = max(m, e);
	}
	map<int, int> memo;
	ii ans = {0, 0};
	for(int i=n-1;i>=0;i--){
		memo[v[i]] = memo[v[i]+1] == 0 ? 1 : memo[v[i]+1]+1;
		if(memo[v[i]] > ans.f){
			ans.f = memo[v[i]];
			ans.s = v[i];
		}
	}
	cout << ans.f << endl;	
	for(int i=0; i<n;++i){
		if(v[i] == ans.s){
			cout << i+1 << ' ';
			ans.s++;
		}
	}
	cout << endl;

	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

