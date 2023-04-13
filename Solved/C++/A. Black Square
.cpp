// https://codeforces.com/contest/431/problem/A
#include <bits/stdc++.h>
using namespace std;
 
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;
#define Mdbg(a) for(auto e: a){cout << e.first << ' ' << e.second << endl;}
#define read(arr, n) for(int i=0;i<n;i++) cin >> arr[i];
 
typedef long long ll;
int main(void){
	map<int,int> m;
	int a,b,c,d;cin>>a>>b>>c>>d;
	m[1] = a;
	m[2] = b;
	m[3] = c;
	m[4] = d;
	
	int s=0;
	string g;cin>>g;
	for(int i=0;i<(int)g.size();i++){
		s+= m[g[i]-'0'];
	}
	cout << s << endl;
	return (0);
}

