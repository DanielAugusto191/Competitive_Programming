// https://codeforces.com/contest/34/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
int mdc(int a, int b) {return b==0 ? a : mdc(b, a%b);}
typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n,m;cin>>n>>m;
	vector<int> arr;
	for(int i=0;i<n;++i) {
		int e;cin >> e;
		if(e < 0) arr.pb(-e);
	}
	sort(arr.begin(), arr.end(), greater<int>());
	int ans = 0;
	m = min(m, (int)arr.size());
	for(int i=0;i<m;++i) ans += arr[i];
	cout << ans << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

