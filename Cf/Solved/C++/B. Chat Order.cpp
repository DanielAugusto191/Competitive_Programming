// https://codeforces.com/contest/637/problem/B
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

int main(void){
	int n;cin>>n;
	unordered_map<string, int> m;
	for(int i=0;i<n;++i){
		string s;cin>>s;
		m[s] = i+1;
	}
	vector<pair<string, int> > v;
	for(auto& e: m) v.push_back(e);
	sort(v.begin(),v.end(), [](pair<string, int>& a, pair<string, int>& b){
		return a.second > b.second;
	});
	for(auto& e: v){
		cout << e.first << endl;
	}
	

	return (0);
}
