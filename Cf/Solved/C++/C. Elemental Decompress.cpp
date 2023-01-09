// https://codeforces.com/contest/1768/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' <<  e.second;cout << endl;}

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n],p[n],q[n];
		unordered_map<int,int> pp;
		vector<pair<int,int> > arr;
		for(int i=0;i<n;++i){
			cin >> a[i];
			p[i] = q[i] = -1;
			++pp[a[i]];
			arr.push_back({a[i], i});
		}
		sort(arr.begin(), arr.end());
		int ans = 1;
		for(int i=0;i<n;++i) if(pp[a[i]] > 2 || arr[i].first < (i+1)){ans =0;break;}
		if(!ans){cout << "NO" << endl;continue;}
		reverse(arr.begin(), arr.end());
		unordered_map<int,int> inp, inq;
		for(int i=0;i<n;++i) if(!inp[arr[i].first]) p[arr[i].second] = arr[i].first, inp[arr[i].first] = 1;
								else q[arr[i].second] = arr[i].first, inq[arr[i].first] = 1;
		int l = n;
		for(int i=0;i<n;++i) if(inp[arr[i].first]){
			while(inq[l] == 1) --l;
			if(q[arr[i].second] == -1) q[arr[i].second] = l, inq[l] = 1;
		}
		l = n;
		for(int i=0;i<n;++i) if(inq[arr[i].first]) {
			while(inp[l] == 1) --l;
			if(p[arr[i].second] == -1) p[arr[i].second] = l, inp[l] = 1;
		}
		cout << "YES" << endl;
		for(auto &e: p) cout << e <<  ' ';
		cout << endl;
		for(auto &e: q) cout << e << ' ';
		cout << endl;
		
	}
	exit(0);
}
