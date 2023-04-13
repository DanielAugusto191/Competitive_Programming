//https://atcoder.jp/contests/abc294/tasks/abc294_c 
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
	int n,m;cin>>n>>m;
	int arr[n], arr2[m];
	for(int i=0;i<n;++i) cin >> arr[i];
	for(int i=0;i<m;++i) cin >> arr2[i];
	int i=0,j=0;
	while(i < n && j < m){
		if(arr[i] < arr2[j]) arr[i] = i+j+1, i++;
		else arr2[j] = i+j+1, j++;
	}
	while(i < n) arr[i] = i+j+1, i++;
	while(j < m) arr2[j] = i+j+1, j++;
	Adbg(arr);
	Adbg(arr2);
	exit(0);
}
/*

*/
