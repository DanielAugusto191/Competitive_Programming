// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
 
typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
 
int main(){_
	int n,x,y;cin>>n>>x>>y;
	int k = min(x,y);
	ll l =k-1,r=1e10;
	while(r > l+1){
		int m = (l+r)/2;
		m -= k;
		if(m/x + m/y >= n-1) r=m+k;else l=m+k;
	}
	cout << r << endl;
	exit(0);
}
