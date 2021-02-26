// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

ll w,h,n;
int f(ll x){
	return (x/w) * (x/h) >= n;
}

int main(){_
	cin>>w>>h>>n;
	ll l = 0;
	ll r = 1;
	while(!f(r)) r *= 2;
	while( r > l+1){
		ll m = (l+r)/2;
		if(f(m)) r = m; else l = m;
	}
	cout << r << endl;
	exit(0);
}

