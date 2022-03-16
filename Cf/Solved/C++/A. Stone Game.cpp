// https://codeforces.com/contest/1538/problem/A
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
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int p1, p2, m1=INF, m2=0;
		for(int i=0;i<n;++i){
			int x;cin>>x;
			if(x < m1){
				m1 = x;
				p1 = i;
			}
			if(x > m2){
				m2 = x;
				p2 = i;
			}
		}
		p1++;
		p2++;
		cout << min(max(p1,p2), min(n-min(p1,p2)+1, min(p1,p2)+n-max(p1,p2)+1)) << endl;	
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

