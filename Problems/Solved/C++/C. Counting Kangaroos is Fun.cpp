// https://codeforces.com/contest/373/problem/C
#include <bits/stdc++.h>
using namespace std;
#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'

typedef long long ll;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main(){
	int n;cin>>n;
	int arr[n];for(auto& e: arr) cin >> e;
	sort(arr, arr+n);
	int i = 0,j = n/2;
	int x = 0;
	while(i < n/2 && j < n){
		if(2*arr[i] <= arr[j]){i++; x++;}
		j++;
	}
	cout << n-x << endl;
	exit(0);
}

/*    ______ _   _ _____  
     |  ____| \ | |  __ \ 
     | |__  |  \| | |  | |
     |  __| | . ` | |  | |
     | |____| |\  | |__| |
     |______|_| \_|_____/ 
*/                        

