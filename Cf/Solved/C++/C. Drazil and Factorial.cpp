// https://codeforces.com/problemset/problem/515/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' e.second;};cout << endl;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MAX = 1e9;

int main(){_
	int n;cin>>n;
	string s;cin>>s;
	int arr[10];
	arr[0] = 1;
	for(int i=1;i<10;++i) arr[i] = i*arr[i-1];
	vector<char> ans;
	for(auto &e: s){
		if(e == '0' || e == '1') continue;
		if(e == '4') {
			ans.push_back('2');
			ans.push_back('2');
			ans.push_back('3');
		}else if(e == '8'){
			ans.push_back('2');
			ans.push_back('2');
			ans.push_back('2');
			ans.push_back('7');
		}else if(e == '6'){
			ans.push_back('3');
			ans.push_back('5');
		}else if(e == '9'){
			ans.push_back('2');
			ans.push_back('3');
			ans.push_back('3');
			ans.push_back('7');
		}else ans.push_back(e);
	}
	sort(ans.begin(), ans.end(), greater<char>());
	if(ans.size() == 0) cout << 1 << endl;
	else{
		for(auto e: ans) cout << e;
		cout << endl;
	}
	exit(0);
}