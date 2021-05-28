// https://codeforces.com/contest/1104/problem/B
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

int rm(string& s){
	int ans = 0;
	for(int i=1;i<(int)s.size();++i){
		if(s[i] == s[i-1]){
			s.erase(s.begin()+i-1, s.begin()+i+1);
			ans = 1;
			break;
		}
	}
	return ans;
}

int main(void){_
	string s;cin>>s;
	int turn = 0;
	while(rm(s)) turn = !turn;
	if(!turn) cout << "No" << endl; else cout << "Yes" << endl;

	return (0);
}

