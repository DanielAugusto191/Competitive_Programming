// https://atcoder.jp/contests/dp/tasks/dp_c 
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);

#define endl '\n'
#define pb push_back
#define f first
#define s second

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int n;
vector<vector<int>> v, memo;

int dp(int pos, int k){
	if(pos == n) return 0;
	int arr[3] = {0, 0, 0};
	for(int i=0; i<3; i++){
		if(i == k) continue;
		if(memo[pos][i] == -1)
			arr[i] = v[pos][i]+dp(pos+1, i);
		else 
			arr[i] = memo[pos][i];
		memo[pos][i] = arr[i];
	}
	return *max_element(arr, arr+3);
}


int main(){
   	cin >> n;
	v.resize(n, vector<int>(3));
	memo.resize(n, vector<int>(3, -1));
	for(auto &e: v) cin >> e[0] >> e[1] >> e[2];
	cout << dp(0, -1) << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

