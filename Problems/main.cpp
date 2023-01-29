// 
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

int gcd(int a, int b){
	if(b == 0) return a;
	return gcd(b, a%b);
}


int main(){_
//	int n;cin>>n;
//	vector<int> d;
	// All divisors 
	/*
	  for(int i=2;i<=sqrt(n);++i) if(n%i==0) {d.push_back(i); if(n/i != i) d.push_back(n/i);}
	*/

	// All prime divisors
	/*
	int i = 2;
	int n1 = n;
    while(i < sqrt(n)) (!(n1%i))?(d.push_back(i), n1/=i):++i;
	*/
	for(int i=0;i<100000;++i){
		int a = rand()%100, b = rand()%100;
		cout << "Teste " << i << ": "<< a << ' ' << b << endl;
		assert(__gcd(a,b) == gcd(a, b));
	}
	cout << "OK" << endl;
	exit(0);
}
/*
1 3 5 7
1 4 9 16
*/
