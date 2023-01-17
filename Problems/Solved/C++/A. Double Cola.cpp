//https://codeforces.com/contest/82/problem/A 
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

int main(){_
	vector<vector<pii> > v(5);
	v[0] = {{1, 2}};
	v[1] = {{2, 3}};
	v[2] = {{3, 4}};
	v[3] = {{4, 5}};
	v[4] = {{5, 6}};
	unordered_map<int, string> m = {{0, "Sheldon"}, {1, "Leonard"}, {2, "Penny"}, {3, "Rajesh"}, {4, "Howard"}};
	for(int i=1;i<28;++i){
		for(int j=0;j<5;++j){	
			int s = v[j][i-1].first + (5-j)*(1<<(i-1)) + j*(1<<i);
			v[j].push_back({s, s+(1<<i)});
		}
	}
	int n;cin>>n;
	for(int i=0;i<5;++i){
		for(auto &e: v[i]){
			if(n >= e.first && n < e.second){
				cout << m[i] << endl;
				exit(0);
			}
		}
	}
	exit(0);
}

/*
S [(1,2), (6,7), (16, 19)] (s[i-1] + 5*i, s[i-1]+5i + i)? = X
s[i] = s[i-1] + (5-j)*(1<<(i-1)) + j*(1<<i)? = V

1,6-7, 16-19, 36-43
... 20-23, 44-51
... 24-27, 52-59
... 28-31, 60-67
... 32-35, 68-75
 * */
