// https://codeforces.com/contest/1555/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
int mdc(int a, int b) {return b==0 ? a : mdc(b, a%b);}
typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
	int t;cin>>t;
	while(t--){
		ll n;
		cin >> n;
		if(n%2) n++;
		if(n < 6) {cout << 15 << endl;continue;}
		cout << 5*n/2 << endl;
	}
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

