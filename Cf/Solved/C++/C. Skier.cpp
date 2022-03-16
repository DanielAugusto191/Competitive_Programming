// https://codeforces.com/contest/1351/problem/C
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef unsigned long long ll;
int main(void){
	int n;cin>>n;
	while(n--){
	string s;cin>>s;
	int ans = 0;
	map<pair<int, int>, set<char> > m;
	pair<int, int> pos = {0,0};
	for(auto e: s){
		if(m[pos].find(e) != m[pos].end()){
			if(e=='N') pos.second++;
			if(e=='S') pos.second--;
			if(e=='E') pos.first++;
			if(e=='W') pos.first--;
			ans+=1;
			continue;
		}
		m[pos].insert(e);
		if(e == 'N') {
			pos.second++;
			int vis = 0;
			for(auto k: m[pos]){
				if(k == 'S'){ans+=1; vis = 1;break;}
			}
			if(!vis) ans += 5;
		}
		else if(e == 'S'){
			pos.second--;
			int vis = 0;
			for(auto k: m[pos]){
				if(k == 'N'){ans+=1; vis = 1;break;}
			}
			if(!vis) ans += 5;
		}
		else if(e == 'W'){
			pos.first--;
			int vis = 0;
			for(auto k: m[pos]) if(k == 'E'){ans += 1; vis = 1; break;}
			if(!vis) ans += 5;		
		}
		else if(e == 'E'){
			pos.first++;
			int vis = 0;
			for(auto k: m[pos]) if (k == 'W'){ans += 1; vis = 1; break;}
			if(!vis) ans += 5;
		}
	}
	cout << ans << endl;
	}
	return (0);
}

