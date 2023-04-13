// https://codeforces.com/contest/279/problem/B
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
vector<int> arr;
int n,t;
int f(int a){
	if(a > n) return 0;
	int s = 0, i;
	for(i=0;i<a;++i) s+= arr[i];
	if(s <= t) return 1;
	while(i < n){
		s+= arr[i];
		s-= arr[i-a];
		if(s <= t) return 1;
		i++;
	}
	return 0;

}

int main(){_
	cin>>n>>t;
	arr.resize(n);
	for(auto &e: arr) cin >> e;
	int l = 0, r = 1e5+10;
	while(l+1 < r){
		int m = (l+r)/2;
		if(f(m)) l = m;
		else r = m;
	}
	cout << l << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

