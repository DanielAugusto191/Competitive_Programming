// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=514
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
const int MOD = (int)1e9 + 7;
const int MAX = 1e9;

int main(){_
	int h,u,d,f;
	while(cin >> h >> u >> d >> f && h != 0){
		float r = u*f*1.0/100;
		int n =1;
		float hn = 0;
		while(1){
			hn += max(0.f, u*1.f-r*(n-1));
			if(hn > h) {
				cout << "success on day " << n << endl;
				break;
			}
			else{
				hn -= d;
				if(hn < 0){
					cout << "failure on day " << n << endl;
					break;
				}
			}
			n++;
		}
	}
	exit(0);
}
/*

*/
