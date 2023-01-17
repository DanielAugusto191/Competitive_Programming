// https://codeforces.com/contest/1592/problem/A
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define dbg(a) cout << a << " -- DEBUG -- "<< endl;
#define Adbg(a) for(auto e: a){cout << e << ' ';};cout << endl;

typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int arr[1000];
int main(){_
	int t;cin>>t;
	while(t--){
		int n,h;cin>>n>>h;
		pair<int,int> mm = {-1,-1};
		for(int i=0;i<n;++i) cin >> arr[i];
		for(int i=0;i<n;++i){
			if(arr[i] >= mm.first) mm.second = mm.first, mm.first = arr[i];
			else if(arr[i] > mm.second) mm.second = arr[i];
		}
		int k = mm.first + mm.second;
		int ans = 2*(h/k);
		h = h-(k*(h/k));
		if(h<=0){
			cout << ans << endl;
		}else{
			h-=mm.first;
			ans++;
			if(h<=0){cout << ans << endl;} else{
				cout << ans+1 << endl;
			}
		}
	}
	exit(0);
}
