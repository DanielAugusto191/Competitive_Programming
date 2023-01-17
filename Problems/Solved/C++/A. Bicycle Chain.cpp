// https://codeforces.com/contest/215/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
int arr1[55], arr2[55];

int main(){_
	unordered_map<int,int> ans;
	int n,m;cin>>n;
	for(int i=0;i<n;++i) cin >> arr1[i];
	cin >> m;
	for(int i=0;i<m;++i) cin >> arr2[i];
	int mm = -1;
	for(int i=0;i<m;++i){
		for(int j=0;j<n;++j){
			int k = arr2[i]%arr1[j];
			if(k == 0){
				ans[arr2[i]/arr1[j]]++;
				mm = max(mm, arr2[i]/arr1[j]);
			}
		}
	}
	cout << ans[mm] << endl;
	exit(0);
}
