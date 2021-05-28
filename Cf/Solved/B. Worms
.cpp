// https://codeforces.com/contest/474/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<ii> v;
int bs(int x, int e, int d){
	if(e > d) return -1;
	int m = (e+d)/2;
	if( x >= v[m].first && x <= v[m].second) return m;
	else if( x < v[m].first) return bs(x, e, m-1);
	else if ( x > v[m].second) return bs(x, m+1, d);
	return -1;
}

int main(void){_
	int n;cin>>n;
	v.resize(n);
	int x;cin>>x;
	v[0] = {1, x};
	for(int i=1;i<n;i++){
		cin>>x;
		v[i] = {v[i-1].second+1, v[i-1].second+x};
	}
	cin>>n;
	while(n--){
		cin >> x;
		cout << bs(x, 0, (int)v.size()-1)+1 << endl;
	}
	return (0);
}

