// https://codeforces.com/gym/101021/problem/1
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
	int l = 1, r = 1e6;
	while(l != r){
		int m = (l+r+1)/2;
		cout << m << endl;
		fflush(stdout);
		string s;cin>>s;
		if(s == "<") r = m-1;else l = m;
	}
	cout << "! " << l << endl;
	fflush(stdout);
	exit(0);
}

