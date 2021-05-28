// https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

double n,k;
vector<int> v;

int c(double x){
	int s = 0;
	for(auto& e: v) s += floor(e/x);
	return s >= k;
}

int main(){_
	cin>>n>>k;
	v.resize(n);
	for(auto& e: v) cin>>e;
	double l=0,r = 1e8;
	for(int i=0; i<100;++i){
		double m = (l+r)/2;
		if (c(m)) l = m; else r = m;
	}
	cout << setprecision(20) << l << endl;

	exit(0);
}

