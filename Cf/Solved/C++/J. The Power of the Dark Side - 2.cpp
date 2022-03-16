// https://codeforces.com/gym/102215/problem/J
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	vector<pair<ll, int> > v(n);
	vector<ll> w(n);
	for(int i=0;i<n;++i){
		ll a,b,c;
		cin >> a >> b >> c;
		w[i] = a + b + c - max(a, max(b, c));
		v[i] = {(a+b+c)-1, (max(a, max(b, c)) <= 1)};
	}
	sort(w.begin(), w.end());
	for(int i=0;i<n;++i){
		ll l = -1 , r = n;
		while(l+1 < r){
			ll m = (l+r)/2;
			if(v[i].first > w[m]) l = m; else r = m;
		}
		if(r == n) r--;
		if(w[r] >= v[i].first) r--;
		if(v[i].second)r++;
		cout << r << ' ';
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


