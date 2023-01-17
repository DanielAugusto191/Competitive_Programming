// https://codeforces.com/contest/459/problem/B
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second
int mdc(int a, int b) {return b==0 ? a : mdc(b, a%b);}
typedef unsigned long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){_
	int n;cin>>n;
	int arr[n];
	for(auto &e: arr) cin >> e;
	sort(arr, arr+n);
	cout << arr[n-1]-arr[0] << ' ';
	if(arr[n-1] == arr[0]){
		cout << 1LL*n*(n+1)/2 - n << endl;
		exit(0);
	}
	ii ans = {0,0};
	for(int i=0;i<n;++i){
		if(arr[i] == arr[0]) ans.f++;
		if(arr[n-i-1] == arr[n-1]) ans.s++;
	}
	cout << 1LL*ans.f*ans.s << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

