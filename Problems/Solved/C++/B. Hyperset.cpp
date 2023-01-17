// https://codeforces.com/contest/1287/problem/B
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
	vector<string> v;
	set<string> x;
	int n,m;cin>>n>>m;
	for(int i=0;i<n;++i){
		string s;cin>>s;
		v.push_back(s);
		x.insert(s);
	}
	int ans = 0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			string nov = "";
			for(int k=0;k<m;k++){
				if(v[i][k] == v[j][k]) nov+=v[i][k];
				else if(v[i][k] == 'E'){
					if(v[j][k] == 'S') nov+='T'; else nov+='S';
				}else if(v[i][k] == 'S'){
					if(v[j][k] == 'E') nov+='T'; else nov+='E';
				}else if(v[i][k] == 'T'){
					if(v[j][k] == 'E') nov+='S'; else nov+='E';
				}
			}
			if(x.count(nov)) ans++;
		}
	}
	cout << ans/3 << endl;
	return (0);
}

