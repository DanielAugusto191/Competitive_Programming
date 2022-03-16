// https://codeforces.com/contest/556/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	stack<char> res;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		char c;cin>>c;
		if(!(int)res.size()) {res.push(c);continue;}
		if(c != res.top()) res.pop();
		else res.push(c);
	}
	cout << (int)res.size() << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        


