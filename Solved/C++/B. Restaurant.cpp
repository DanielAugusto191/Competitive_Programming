// https://codeforces.com/contest/597/problem/B
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto& e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto& e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(void){_
	int n;cin>>n;
	vector<ii> v;
	for(int i=0;i<n;++i){
		int l,r;cin>>l>>r;
		v.push_back({l,r});
	}
	sort(v.begin(), v.end(), [](ii a, ii b){
			if(a.second == b.second)
				return a.second-a.first < b.second-b.first;
			else
				return a.second < b.second;
			});
	int ans = 1;
	int j = 0;
	for(int i=1;i<n;i++){
		if(v[i].first > v[j].second){
			ans++;
			j=i;
		}
	}
//		if(v[i].first > v[j].second){ans++; j=i;}
	cout << ans << endl;
	return (0);
}

